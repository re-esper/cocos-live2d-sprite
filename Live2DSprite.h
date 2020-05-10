#pragma once

#include "cocos2d.h"
#include "Live2DModel.h"
#include <CubismFramework.hpp>
#include <Math/CubismMatrix44.hpp>
#include "Id/CubismIdManager.hpp"

USING_NS_CC;

#define csm_id(str) Csm::CubismFramework::GetIdManager()->GetId(str.c_str())

class Live2DSprite : public Node
{
public:
    static bool initialize();
    static void dispose();
private:
    static bool _initialized;
    static EventListenerCustom* _recreatedEventlistener;
private:
    Live2DSprite();
public:
    ~Live2DSprite();
    static Live2DSprite* create(const std::string& modelFile);
protected:
    bool initWithFile(const std::string& modelFile);
public:
    void onEnter() override;
    void onExit() override;
    void update(float delta) override;
    void draw(Renderer* renderer, const Mat4& transform, uint32_t flags) override;

    virtual const Vec2& getAnchorPoint() const;
    virtual void setAnchorPoint(const Vec2& point);
    virtual Rect getBoundingBox() const;
    virtual void setOpacity(GLubyte opacity);
    virtual void setColor(const Color3B& color);
public:
    bool startMotion(const char* group, int32_t no, int32_t priority) {
        return _model->StartMotion(group, no, priority) != Csm::InvalidMotionQueueEntryHandleValue;
    }
    bool startRandomMotion(const char* group, int32_t priority) {
        return _model->StartRandomMotion(group, priority) != Csm::InvalidMotionQueueEntryHandleValue;
    }
    void setExpression(const char* expressionID) {
        _model->SetExpression(expressionID);
    }
    void setRandomExpression() {
        _model->SetRandomExpression();
    }
    void setAcceleration(float x, float y, float z) {
        _model->SetAcceleration(x, y, z);
    }
    bool hitTest(float x, float y);
    bool areaHitTest(const char* hitAreaName, float x, float y);
    void setLookAtPoint(float x, float y);
    void resetLookAt() { _model->SetDragging(0.f, 0.f); }
public:
    int32_t getParameterCount() const { return innerModel()->GetParameterCount(); }
    std::vector<std::string> getParameterNames() const {
        const auto csmModel = innerModel()->GetModel();
        const auto parameterIds = csmGetParameterIds(csmModel);
        std::vector<std::string> result;
        for (auto i = 0; i < csmGetParameterCount(csmModel); ++i)
            result.emplace_back(parameterIds[i]);
        return result;
    }
    float getParameterMaximumValue(const std::string& name) const {
        return innerModel()->GetParameterMaximumValue(innerModel()->GetParameterIndex(csm_id(name)));
    }
    float getParameterMinimumValue(const std::string& name) const {
        return innerModel()->GetParameterMinimumValue(innerModel()->GetParameterIndex(csm_id(name)));
    }
    float getParameterDefaultValue(const std::string& name) const {
        return innerModel()->GetParameterDefaultValue(innerModel()->GetParameterIndex(csm_id(name)));
    }
    float getParameterValue(const std::string& name) const {
        return innerModel()->GetParameterValue(innerModel()->GetParameterIndex(csm_id(name)));
    }
    void setParameterValue(const std::string& name, float value, float weight = 1.0f) {
        innerModel()->SetParameterValue(csm_id(name), value, weight);
    }
    void addParameterValue(const std::string& name, float value, float weight = 1.0f) {
        innerModel()->AddParameterValue(csm_id(name), value, weight);
    }
    void multiplyParameterValue(const std::string& name, float value, float weight = 1.0f) {
        innerModel()->MultiplyParameterValue(csm_id(name), value, weight);
    }

    int32_t getPartCount() const { return innerModel()->GetPartCount(); }
    std::vector<std::string> getPartNames() const {
        const auto csmModel = innerModel()->GetModel();
        const auto partIds = csmGetPartIds(csmModel);
        std::vector<std::string> result;
        for (auto i = 0; i < csmGetPartCount(csmModel); ++i)
            result.emplace_back(partIds[i]);
        return result;
    }
    float getPartOpacity(const std::string& name) const {
        return innerModel()->GetPartOpacity(csm_id(name));
    }
    void setPartOpacity(const std::string& name, float opacity) {
        innerModel()->SetPartOpacity(csm_id(name), opacity);
    }

    int32_t getDrawableCount() const { return innerModel()->GetDrawableCount(); }
    std::vector<std::string> getDrawableNames() const {
        const auto csmModel = innerModel()->GetModel();
        const auto drawableIds = csmGetDrawableIds(csmModel);
        std::vector<std::string> result;
        for (auto i = 0; i < csmGetDrawableCount(csmModel); ++i)
            result.emplace_back(drawableIds[i]);
        return result;
    }
    float getDrawableOpacity(const std::string& name) const {
        return innerModel()->GetDrawableOpacity(innerModel()->GetDrawableIndex(csm_id(name)));
    }
    int32_t getDrawableCulling(const std::string& name) const {
        return innerModel()->GetDrawableCulling(innerModel()->GetDrawableIndex(csm_id(name)));
    }
    int32_t getDrawableBlendMode(const std::string& name) const {
        return innerModel()->GetDrawableBlendMode(innerModel()->GetDrawableIndex(csm_id(name)));
    }

    Vec2 getGravity() const {
        const auto phy = _model->getPhysics();
        if (phy) {
            const auto g = phy->GetOptions().Gravity;
            return Vec2(g.X, g.Y);
        }
        return Vec2();
    }
    void setGravity(const Vec2& gravity) {
        auto phy = _model->getPhysics();
        if (phy) {
            auto op = phy->GetOptions();
            op.Gravity = Csm::CubismVector2(gravity.x, gravity.y);
            phy->SetOptions(op);
        }
    }
    Vec2 getWind() const {
        const auto phy = _model->getPhysics();
        if (phy) {
            const auto g = phy->GetOptions().Wind;
            return Vec2(g.X, g.Y);
        }
        return Vec2();
    }
    void setWind(const Vec2& wind) {
        auto phy = _model->getPhysics();
        if (phy) {
            auto op = phy->GetOptions();
            op.Wind = Csm::CubismVector2(wind.x, wind.y);
            phy->SetOptions(op);
        }
    }
    void setBlinkingInterval(float blinkigInterval) { // in seconds
        auto blk = _model->getEyeBlink();
        if (blk) {
            blk->SetBlinkingInterval(blinkigInterval);
        }
    }
    void setBlinkingSettings(float closing, float closed, float opening) {
        auto blk = _model->getEyeBlink();
        if (blk) {
            blk->SetBlinkingSettings(closing, closed, opening);
        }
    }
    void setLipSyncValue(float value = -1) {
        _model->setLipSyncValue(value);
    }
    void setIsAutoIdle(bool autoIdle = true) {
        _model->setIsAutoIdle(autoIdle);
    }
protected:
	void onDrawModel(const Mat4& transform, uint32_t flags);
    void updateHitBoxes();
    inline Csm::CubismModel* innerModel() const { return _model->GetModel(); }
private:
	Live2DModel* _model = nullptr;
    EventListenerCustom* _recreateListener = nullptr;
	CustomCommand _drawCommand;
    Csm::CubismMatrix44 _drawMatrix; // viewprojection
    bool _hitBoxesDirty;
    std::unordered_map<std::string, Rect> _hitBoxes;
};
