#ifndef __myFinalProject__FirstPassScene__
#define __myFinalProject__FirstPassScene__

#include <stdio.h>
#include <vector>
#include "cocos2d.h"
#include "gamebackground.h"
#include "SecondPassScene.h"
#include "SceneBuilder.h"

class FirstPass : public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void update(float dt);
    
    CREATE_FUNC(FirstPass);
};

#endif