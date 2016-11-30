#ifndef __myFinalProject__ThirdPassScene__
#define __myFinalProject__ThirdPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "ForthPassScene.h"
#include "SceneBuilder.h"
#include "SceneMaintainer.h"

class ThirdPass : public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void update(float dt);
    
    CREATE_FUNC(ThirdPass);

private:
	Sprite* up_brick1, *down_brick1;
	int pm1;
};

#endif