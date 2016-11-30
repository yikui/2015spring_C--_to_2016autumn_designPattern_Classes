#ifndef __myFinalProject__SecondPassScene__
#define __myFinalProject__SecondPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "ThirdPassScene.h"

class SecondPass : public GameBackground
{
    
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();

    void update(float dt);
    
    CREATE_FUNC(SecondPass);
};

#endif
