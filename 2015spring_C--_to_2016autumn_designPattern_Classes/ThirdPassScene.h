#ifndef __myFinalProject__ThirdPassScene__
#define __myFinalProject__ThirdPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "ForthPassScene.h"

class ThirdPass : public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void update(float dt);
    
    CREATE_FUNC(ThirdPass);

private:
	PhysicsBody *pmupbrick1, *pmdownbrick1;
	int pm1;
};

#endif