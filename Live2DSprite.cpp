
#include "Live2DSprite.h"
#include "Rendering/OpenGL/CubismRenderer_OpenGLES2.hpp"

USING_NS_CC;

bool Live2DSprite::_initialized = false;
EventListenerCustom* Live2DSprite::_recreatedEventlistener = nullptr;

class Live2DAllocator : public Csm::ICubismAllocator {
    void* Allocate(const Csm::csmSizeType size)
    {
        return malloc(size);
    }
    void Deallocate(void* memory)
    {
        if (memory) free(memory);
    }
    void* AllocateAligned(const Csm::csmSizeType size, const Csm::csmUint32 alignment)
    {
        size_t offset, shift, alignedAddress;
        void *allocation, **preamble;
        offset = alignment - 1 + sizeof(void*);
        allocation = Allocate(size + static_cast<Csm::csmUint32>(offset));
        alignedAddress = (size_t)allocation + sizeof(void*);
        shift = alignedAddress % alignment;
        if (shift) {
            alignedAddress += (alignment - shift);
        }
        preamble = (void**)alignedAddress;
        preamble[-1] = allocation;
        return (void*)alignedAddress;
    }
    void DeallocateAligned(void* alignedMemory)
    {
        void** preamble;
        preamble = (void**)alignedMemory;
        Deallocate(preamble[-1]);
    }
};

static void _cubismPrint(const Csm::csmChar* message)
{
    CCLOG("%s", message);
}

bool Live2DSprite::initialize()
{
    // prepare for Cubism Framework API.
    static Live2DAllocator cubismAllocator;
    Csm::CubismFramework::Option cubismOption;
    cubismOption.LogFunction = _cubismPrint;
    cubismOption.LoggingLevel = Csm::CubismFramework::Option::LogLevel_Verbose;
    if (!Csm::CubismFramework::StartUp(&cubismAllocator, &cubismOption)) {
        CCLOGERROR("Live2D system initialize failed.");
        return false;
    }
    Csm::CubismFramework::Initialize();

#ifdef CSM_TARGET_ANDROID_ES2
    char* exts = (char*)glGetString(GL_EXTENSIONS);
    if (strstr(exts, "GL_NV_shader_framebuffer_fetch ")) {
        Rendering::CubismRenderer_OpenGLES2::SetExtShaderMode(true, true);
    }
#endif
    _recreatedEventlistener = EventListenerCustom::create(EVENT_RENDERER_RECREATED, [](EventCustom*) {
        Csm::Rendering::CubismRenderer::StaticRelease();
    });
    Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(_recreatedEventlistener, -1);
    _initialized = true;
    return true;
}

void Live2DSprite::dispose()
{
    if (!_initialized) return;
    Director::getInstance()->getEventDispatcher()->removeEventListener(_recreatedEventlistener);
    _recreatedEventlistener = nullptr;
    Csm::CubismFramework::Dispose();
    _initialized = false;
}


Live2DSprite::Live2DSprite()
{
}

Live2DSprite::~Live2DSprite()
{
    if (_recreateListener)
        Director::getInstance()->getEventDispatcher()->removeEventListener(_recreateListener);
    CC_SAFE_DELETE(_model);
}

Live2DSprite* Live2DSprite::create(const std::string& modelFile)
{
    auto ret = new (std::nothrow) Live2DSprite();
    if (ret && ret->initWithFile(modelFile)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool Live2DSprite::initWithFile(const std::string& modelFile)
{
    if (!Node::init()) return false;

    if (!FileUtils::getInstance()->isFileExist(modelFile)) {
        CCLOG("Call Live2DSprite::initWithFile with invalid model filename.");
        return false;
    }

    _model = new (std::nothrow) Live2DModel();
    if (!_model) return false;

    std::string basePath = "";
    std::string fileName = modelFile;
    size_t found = modelFile.find_last_of("/\\");
    if (std::string::npos != found) {
        basePath = modelFile.substr(0, found + 1);
        fileName = modelFile.substr(found + 1);
    }

    _model->LoadAssets(basePath.c_str(), fileName.c_str());

    _recreateListener = EventListenerCustom::create(EVENT_RENDERER_RECREATED, [&](EventCustom*) {
        _model->ReloadRenderer();
    });
    Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(_recreateListener, 2);

    const auto winSize = Director::getInstance()->getWinSize();
    auto mat = Mat4::IDENTITY;
    mat.scale(1024 / winSize.width, 1024 / winSize.height, 1.f);
    mat.translate(Vec3(-1.f, -1.f, 0));
    mat.multiply(_model->GetModelMatrix()->GetArray());
    float right = innerModel()->GetCanvasWidth() / 2;
    float left = -right;
    float bottom = innerModel()->GetCanvasHeight() / 2;
    float top = -bottom;
    float scale_x = winSize.width * 0.5f;
    float scale_y = winSize.height * 0.5f;
    float convertLeft = (left * mat.m[0] + top * mat.m[1]) * scale_x;
    float convertTop = (left * mat.m[4] + top * mat.m[5]) * scale_y;
    float convertRight = (right * mat.m[0] + bottom * mat.m[1]) * scale_x;
    float convertBottom = (right * mat.m[4] + bottom * mat.m[5]) * scale_y;
    Node::setContentSize(Size(convertRight - convertLeft, convertBottom - convertTop));

    memcpy(_drawMatrix.GetArray(), mat.m, 16 * sizeof(float));
    _hitBoxesDirty = true;
    updateHitBoxes();
    return true;
}

const Vec2& Live2DSprite::getAnchorPoint() const
{
    static Vec2 pt;
    pt = _anchorPoint + Vec2(0.5, 0.5);
    return pt;
}

void Live2DSprite::setAnchorPoint(const Vec2& point)
{
    Node::setAnchorPoint(point - Vec2(0.5, 0.5));
}

Rect Live2DSprite::getBoundingBox() const
{
    Rect rect(-_contentSize.width * 0.5, -_contentSize.height * 0.5, _contentSize.width, _contentSize.height);
    return RectApplyAffineTransform(rect, getNodeToParentAffineTransform());
}

void Live2DSprite::setOpacity(GLubyte opacity)
{
    Node::setOpacity(opacity);
    auto color = _model->GetRenderer<Csm::Rendering::CubismRenderer_OpenGLES2>()->GetModelColor();
    _model->GetRenderer<Csm::Rendering::CubismRenderer_OpenGLES2>()->SetModelColor(color.R, color.G, color.B, opacity / 255.f);
}

void Live2DSprite::setColor(const Color3B& color)
{
    Node::setColor(color);
    auto alpha = _model->GetRenderer<Csm::Rendering::CubismRenderer_OpenGLES2>()->GetModelColor().A;
    _model->GetRenderer<Csm::Rendering::CubismRenderer_OpenGLES2>()->SetModelColor(color.r / 255.f, color.g / 255.f, color.b / 255.f, alpha);
}

bool Live2DSprite::areaHitTest(const char * hitAreaName, float x, float y)
{
    updateHitBoxes();
    const auto it = _hitBoxes.find(hitAreaName);
    if (it != _hitBoxes.end()) {
        return it->second.containsPoint(convertToNodeSpace(Vec2(x, y)));
    }
    return false;
}

bool Live2DSprite::hitTest(float x, float y)
{
    updateHitBoxes();
    auto pt = convertToNodeSpace(Vec2(x, y));
    for (auto itr = _hitBoxes.begin(); itr != _hitBoxes.end(); ++itr) {
        if (itr->second.containsPoint(pt)) {
            CCLOG("Hit %s", itr->first.c_str());
            return true;
        }
    }
    return false;
}

void Live2DSprite::setLookAtPoint(float x, float y)
{
    const auto p = convertToNodeSpace(Vec2(x, y));
    const auto sz = getContentSize() / 2;
    _model->SetDragging(p.x / sz.width, p.y / sz.height);
}


void Live2DSprite::onEnter()
{
    Node::onEnter();
    _model->Update();
    scheduleUpdate();
}

void Live2DSprite::onExit()
{
    Node::onExit();
    unscheduleUpdate();
}

void Live2DSprite::update(float delta)
{
    Node::update(delta);
    _model->Update();
}

void Live2DSprite::draw(Renderer* renderer, const Mat4& transform, uint32_t flags)
{
    if (!_visible) return;

    getNodeToParentTransform();
    _drawCommand.init(_globalZOrder);
    _drawCommand.func = CC_CALLBACK_0(Live2DSprite::onDrawModel, this, transform, flags);
    renderer->addCommand(&_drawCommand);

    Node::draw(renderer, transform, flags);
}

void Live2DSprite::onDrawModel(const Mat4& transform, uint32_t flags)
{
    auto director = Director::getInstance();
    director->pushMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
    director->loadMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW, transform);

    const auto winSize = director->getWinSize();
    auto tr = transform;

    Vec3 translate;
    tr.getTranslation(&translate);
    Quaternion rot;
    tr.getRotation(&rot);
    rot.inverse();
    tr.rotate(rot);
    tr.scale(1024 / winSize.width, 1024 / winSize.height, 1.f);
    tr.m[12] = translate.x / winSize.width * 2 - 1;
    tr.m[13] = translate.y / winSize.height * 2 - 1;
    rot.inverse();
    tr.rotate(rot);

    memcpy(_drawMatrix.GetArray(), tr.m, 16 * sizeof(float));
    _hitBoxesDirty = true;
    _model->Draw(_drawMatrix);

    director->popMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
}

void Live2DSprite::updateHitBoxes()
{
    if (!_hitBoxesDirty) return;
    const auto winSize = Director::getInstance()->getWinSize();
    const auto scale_x = winSize.width / getScaleX();
    const auto scale_y = winSize.height / getScaleY();
    auto setting = _model->getModelSetting();
    for (auto i = 0; i < setting->GetHitAreasCount(); i++) {
        const auto id = setting->GetHitAreaId(i);
        const auto name = setting->GetHitAreaName(i);
        const auto area = _model->GetDrawableArea(innerModel()->GetDrawableIndex(id), _drawMatrix, Csm::CubismVector2(2, 2));
        auto rect = Rect(area.X - 1, area.Y - 1, area.Width, area.Height);
        rect.origin.x *= scale_x;
        rect.origin.y *= scale_y;
        rect.size.width *= scale_x;
        rect.size.height *= scale_y;
        _hitBoxes[name] = rect;
    }
    _hitBoxesDirty = false;
}
