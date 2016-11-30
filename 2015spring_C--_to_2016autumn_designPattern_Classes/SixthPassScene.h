#ifndef __myFinalProject__SixthPassScene__
#define __myFinalProject__SixthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "SeventhPassScene.h"

class SixthPass: public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    virtual void update(float dt);
    
    CREATE_FUNC(SixthPass);
    
};

#endif /* defined(__myFinalProject__SixthPassScene__) */
