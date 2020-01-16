#include "base/ccConfig.h"
#ifndef __cocos2dx_live2d_h__
#define __cocos2dx_live2d_h__

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

int register_live2d_module(lua_State* tolua_S);

#endif // __cocos2dx_live2d_h__
