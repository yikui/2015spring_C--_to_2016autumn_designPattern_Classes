#ifndef __myFinalProject__ForthPassScene__
#define __myFinalProject__ForthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "FifthPassScene.h"

class ForthPass : public GameBackground
{
    
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    virtual void update(float dt);
    
    CREATE_FUNC(ForthPass);
    
};

#endif /* defined(__myFinalProject__ForthPassScene__) */
