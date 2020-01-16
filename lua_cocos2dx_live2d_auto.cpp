#include "lua_cocos2dx_live2d_auto.hpp"
#include "Live2DSprite.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_cocos2dx_live2d_Live2DSprite_resetLookAt(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_resetLookAt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_resetLookAt'", nullptr);
            return 0;
        }
        cobj->resetLookAt();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:resetLookAt",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_resetLookAt'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setAnchorPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "Live2DSprite:setAnchorPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setAnchorPoint'", nullptr);
            return 0;
        }
        cobj->setAnchorPoint(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setAnchorPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setAcceleration(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setAcceleration'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        double arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DSprite:setAcceleration");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:setAcceleration");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DSprite:setAcceleration");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setAcceleration'", nullptr);
            return 0;
        }
        cobj->setAcceleration(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setAcceleration",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setAcceleration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getParameterValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterValue'", nullptr);
            return 0;
        }
        double ret = cobj->getParameterValue(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getParameterValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getDrawableCount(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableCount'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableCount'", nullptr);
            return 0;
        }
        int ret = cobj->getDrawableCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getDrawableCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getDrawableOpacity(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getDrawableOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableOpacity'", nullptr);
            return 0;
        }
        double ret = cobj->getDrawableOpacity(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getDrawableOpacity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getDrawableBlendMode(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableBlendMode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getDrawableBlendMode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableBlendMode'", nullptr);
            return 0;
        }
        int ret = cobj->getDrawableBlendMode(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getDrawableBlendMode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableBlendMode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_areaHitTest(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_areaHitTest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        double arg1;
        double arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "Live2DSprite:areaHitTest"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:areaHitTest");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DSprite:areaHitTest");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_areaHitTest'", nullptr);
            return 0;
        }
        bool ret = cobj->areaHitTest(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:areaHitTest",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_areaHitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setPartOpacity(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setPartOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        double arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:setPartOpacity");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:setPartOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setPartOpacity'", nullptr);
            return 0;
        }
        cobj->setPartOpacity(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setPartOpacity",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setPartOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setLipSyncValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setLipSyncValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setLipSyncValue'", nullptr);
            return 0;
        }
        cobj->setLipSyncValue();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DSprite:setLipSyncValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setLipSyncValue'", nullptr);
            return 0;
        }
        cobj->setLipSyncValue(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setLipSyncValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setLipSyncValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setGravity(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setGravity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "Live2DSprite:setGravity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setGravity'", nullptr);
            return 0;
        }
        cobj->setGravity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setGravity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getWind(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getWind'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getWind'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getWind();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getWind",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getWind'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getDrawableNames(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableNames'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableNames'", nullptr);
            return 0;
        }
        std::vector<std::string> ret = cobj->getDrawableNames();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getDrawableNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setOpacity(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "Live2DSprite:setOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setOpacity'", nullptr);
            return 0;
        }
        cobj->setOpacity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setOpacity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getParameterMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterMinimumValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getParameterMinimumValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterMinimumValue'", nullptr);
            return 0;
        }
        double ret = cobj->getParameterMinimumValue(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getParameterMinimumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterMinimumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getPartOpacity(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getPartOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getPartOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getPartOpacity'", nullptr);
            return 0;
        }
        double ret = cobj->getPartOpacity(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getPartOpacity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getPartOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getBoundingBox(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getBoundingBox'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getBoundingBox'", nullptr);
            return 0;
        }
        cocos2d::Rect ret = cobj->getBoundingBox();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getBoundingBox",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getBoundingBox'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_startRandomMotion(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_startRandomMotion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "Live2DSprite:startRandomMotion"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "Live2DSprite:startRandomMotion");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_startRandomMotion'", nullptr);
            return 0;
        }
        bool ret = cobj->startRandomMotion(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:startRandomMotion",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_startRandomMotion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getPartCount(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getPartCount'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getPartCount'", nullptr);
            return 0;
        }
        int ret = cobj->getPartCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getPartCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getPartCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_addParameterValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_addParameterValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        double arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:addParameterValue");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:addParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_addParameterValue'", nullptr);
            return 0;
        }
        cobj->addParameterValue(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        std::string arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:addParameterValue");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:addParameterValue");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DSprite:addParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_addParameterValue'", nullptr);
            return 0;
        }
        cobj->addParameterValue(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:addParameterValue",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_addParameterValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_startMotion(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_startMotion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        int arg1;
        int arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "Live2DSprite:startMotion"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "Live2DSprite:startMotion");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "Live2DSprite:startMotion");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_startMotion'", nullptr);
            return 0;
        }
        bool ret = cobj->startMotion(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:startMotion",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_startMotion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getParameterDefaultValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterDefaultValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getParameterDefaultValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterDefaultValue'", nullptr);
            return 0;
        }
        double ret = cobj->getParameterDefaultValue(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getParameterDefaultValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterDefaultValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getParameterNames(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterNames'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterNames'", nullptr);
            return 0;
        }
        std::vector<std::string> ret = cobj->getParameterNames();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getParameterNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setParameterValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setParameterValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        double arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:setParameterValue");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:setParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setParameterValue'", nullptr);
            return 0;
        }
        cobj->setParameterValue(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        std::string arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:setParameterValue");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:setParameterValue");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DSprite:setParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setParameterValue'", nullptr);
            return 0;
        }
        cobj->setParameterValue(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setParameterValue",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setParameterValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setBlinkingSettings(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setBlinkingSettings'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        double arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DSprite:setBlinkingSettings");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:setBlinkingSettings");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DSprite:setBlinkingSettings");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setBlinkingSettings'", nullptr);
            return 0;
        }
        cobj->setBlinkingSettings(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setBlinkingSettings",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setBlinkingSettings'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getPartNames(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getPartNames'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getPartNames'", nullptr);
            return 0;
        }
        std::vector<std::string> ret = cobj->getPartNames();
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getPartNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getPartNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setRandomExpression(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setRandomExpression'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setRandomExpression'", nullptr);
            return 0;
        }
        cobj->setRandomExpression();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setRandomExpression",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setRandomExpression'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getGravity(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getGravity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getGravity'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getGravity();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getGravity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getParameterCount(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterCount'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterCount'", nullptr);
            return 0;
        }
        int ret = cobj->getParameterCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getParameterCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setExpression(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setExpression'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "Live2DSprite:setExpression"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setExpression'", nullptr);
            return 0;
        }
        cobj->setExpression(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setExpression",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setExpression'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setWind(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setWind'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "Live2DSprite:setWind");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setWind'", nullptr);
            return 0;
        }
        cobj->setWind(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setWind",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setWind'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setBlinkingInterval(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setBlinkingInterval'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DSprite:setBlinkingInterval");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setBlinkingInterval'", nullptr);
            return 0;
        }
        cobj->setBlinkingInterval(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setBlinkingInterval",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setBlinkingInterval'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setColor(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "Live2DSprite:setColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setColor'", nullptr);
            return 0;
        }
        cobj->setColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_setLookAtPoint(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_setLookAtPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DSprite:setLookAtPoint");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:setLookAtPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_setLookAtPoint'", nullptr);
            return 0;
        }
        cobj->setLookAtPoint(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:setLookAtPoint",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_setLookAtPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getParameterMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterMaximumValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getParameterMaximumValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterMaximumValue'", nullptr);
            return 0;
        }
        double ret = cobj->getParameterMaximumValue(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getParameterMaximumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getParameterMaximumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getAnchorPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getAnchorPoint'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getAnchorPoint();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getAnchorPoint",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_hitTest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DSprite:hitTest");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:hitTest");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_hitTest'", nullptr);
            return 0;
        }
        bool ret = cobj->hitTest(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:hitTest",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_getDrawableCulling(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableCulling'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:getDrawableCulling");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableCulling'", nullptr);
            return 0;
        }
        int ret = cobj->getDrawableCulling(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:getDrawableCulling",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_getDrawableCulling'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_multiplyParameterValue(lua_State* tolua_S)
{
    int argc = 0;
    Live2DSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_live2d_Live2DSprite_multiplyParameterValue'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        double arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:multiplyParameterValue");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:multiplyParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_multiplyParameterValue'", nullptr);
            return 0;
        }
        cobj->multiplyParameterValue(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3) 
    {
        std::string arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:multiplyParameterValue");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DSprite:multiplyParameterValue");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DSprite:multiplyParameterValue");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_multiplyParameterValue'", nullptr);
            return 0;
        }
        cobj->multiplyParameterValue(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DSprite:multiplyParameterValue",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_multiplyParameterValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_live2d_Live2DSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Live2DSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DSprite:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_live2d_Live2DSprite_create'", nullptr);
            return 0;
        }
        Live2DSprite* ret = Live2DSprite::create(arg0);
        object_to_luaval<Live2DSprite>(tolua_S, "Live2DSprite",(Live2DSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Live2DSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_live2d_Live2DSprite_create'.",&tolua_err);
#endif
    return 0;
}

static int lua_cocos2dx_live2d_Live2DSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Live2DSprite)");
    return 0;
}

int lua_register_cocos2dx_live2d_Live2DSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Live2DSprite");
    tolua_cclass(tolua_S,"Live2DSprite","Live2DSprite","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Live2DSprite");
        tolua_function(tolua_S,"resetLookAt",lua_cocos2dx_live2d_Live2DSprite_resetLookAt);
        tolua_function(tolua_S,"setAnchorPoint",lua_cocos2dx_live2d_Live2DSprite_setAnchorPoint);
        tolua_function(tolua_S,"setAcceleration",lua_cocos2dx_live2d_Live2DSprite_setAcceleration);
        tolua_function(tolua_S,"getParameterValue",lua_cocos2dx_live2d_Live2DSprite_getParameterValue);
        tolua_function(tolua_S,"getDrawableCount",lua_cocos2dx_live2d_Live2DSprite_getDrawableCount);
        tolua_function(tolua_S,"getDrawableOpacity",lua_cocos2dx_live2d_Live2DSprite_getDrawableOpacity);
        tolua_function(tolua_S,"getDrawableBlendMode",lua_cocos2dx_live2d_Live2DSprite_getDrawableBlendMode);
        tolua_function(tolua_S,"areaHitTest",lua_cocos2dx_live2d_Live2DSprite_areaHitTest);
        tolua_function(tolua_S,"setPartOpacity",lua_cocos2dx_live2d_Live2DSprite_setPartOpacity);
        tolua_function(tolua_S,"setLipSyncValue",lua_cocos2dx_live2d_Live2DSprite_setLipSyncValue);
        tolua_function(tolua_S,"setGravity",lua_cocos2dx_live2d_Live2DSprite_setGravity);
        tolua_function(tolua_S,"getWind",lua_cocos2dx_live2d_Live2DSprite_getWind);
        tolua_function(tolua_S,"getDrawableNames",lua_cocos2dx_live2d_Live2DSprite_getDrawableNames);
        tolua_function(tolua_S,"setOpacity",lua_cocos2dx_live2d_Live2DSprite_setOpacity);
        tolua_function(tolua_S,"getParameterMinimumValue",lua_cocos2dx_live2d_Live2DSprite_getParameterMinimumValue);
        tolua_function(tolua_S,"getPartOpacity",lua_cocos2dx_live2d_Live2DSprite_getPartOpacity);
        tolua_function(tolua_S,"getBoundingBox",lua_cocos2dx_live2d_Live2DSprite_getBoundingBox);
        tolua_function(tolua_S,"startRandomMotion",lua_cocos2dx_live2d_Live2DSprite_startRandomMotion);
        tolua_function(tolua_S,"getPartCount",lua_cocos2dx_live2d_Live2DSprite_getPartCount);
        tolua_function(tolua_S,"addParameterValue",lua_cocos2dx_live2d_Live2DSprite_addParameterValue);
        tolua_function(tolua_S,"startMotion",lua_cocos2dx_live2d_Live2DSprite_startMotion);
        tolua_function(tolua_S,"getParameterDefaultValue",lua_cocos2dx_live2d_Live2DSprite_getParameterDefaultValue);
        tolua_function(tolua_S,"getParameterNames",lua_cocos2dx_live2d_Live2DSprite_getParameterNames);
        tolua_function(tolua_S,"setParameterValue",lua_cocos2dx_live2d_Live2DSprite_setParameterValue);
        tolua_function(tolua_S,"setBlinkingSettings",lua_cocos2dx_live2d_Live2DSprite_setBlinkingSettings);
        tolua_function(tolua_S,"getPartNames",lua_cocos2dx_live2d_Live2DSprite_getPartNames);
        tolua_function(tolua_S,"setRandomExpression",lua_cocos2dx_live2d_Live2DSprite_setRandomExpression);
        tolua_function(tolua_S,"getGravity",lua_cocos2dx_live2d_Live2DSprite_getGravity);
        tolua_function(tolua_S,"getParameterCount",lua_cocos2dx_live2d_Live2DSprite_getParameterCount);
        tolua_function(tolua_S,"setExpression",lua_cocos2dx_live2d_Live2DSprite_setExpression);
        tolua_function(tolua_S,"setWind",lua_cocos2dx_live2d_Live2DSprite_setWind);
        tolua_function(tolua_S,"setBlinkingInterval",lua_cocos2dx_live2d_Live2DSprite_setBlinkingInterval);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_live2d_Live2DSprite_setColor);
        tolua_function(tolua_S,"setLookAtPoint",lua_cocos2dx_live2d_Live2DSprite_setLookAtPoint);
        tolua_function(tolua_S,"getParameterMaximumValue",lua_cocos2dx_live2d_Live2DSprite_getParameterMaximumValue);
        tolua_function(tolua_S,"getAnchorPoint",lua_cocos2dx_live2d_Live2DSprite_getAnchorPoint);
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_live2d_Live2DSprite_hitTest);
        tolua_function(tolua_S,"getDrawableCulling",lua_cocos2dx_live2d_Live2DSprite_getDrawableCulling);
        tolua_function(tolua_S,"multiplyParameterValue",lua_cocos2dx_live2d_Live2DSprite_multiplyParameterValue);
        tolua_function(tolua_S,"create", lua_cocos2dx_live2d_Live2DSprite_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(Live2DSprite).name();
    g_luaType[typeName] = "Live2DSprite";
    g_typeCast["Live2DSprite"] = "Live2DSprite";
    return 1;
}
TOLUA_API int register_live2d_module(lua_State* tolua_S)
{
    lua_getglobal(tolua_S, "_G");
    if (lua_istable(tolua_S, -1)) {
        tolua_open(tolua_S);
        tolua_module(tolua_S, "cc", 0);
        tolua_beginmodule(tolua_S, "cc");
        lua_register_cocos2dx_live2d_Live2DSprite(tolua_S);
        tolua_endmodule(tolua_S);
    }
    lua_pop(tolua_S, 1);
	return 1;
}

