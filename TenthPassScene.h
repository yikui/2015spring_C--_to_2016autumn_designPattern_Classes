#ifndef __myFinalProject__TenthPassScene__
#define __myFinalProject__TenthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "EleventhPassScene.h"

class TenthPass : public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void update(float dt);
    
    CREATE_FUNC(TenthPass);
};

#endif