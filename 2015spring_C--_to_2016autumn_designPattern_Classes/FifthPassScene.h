#ifndef __myFinalProject__FifthPassScene__
#define __myFinalProject__FifthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "SixthPassScene.h"

class FifthPass: public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    virtual void update(float dt);
    
    CREATE_FUNC(FifthPass);
    
};

#endif /* defined(__myFinalProject__FifthPassScene__) */
