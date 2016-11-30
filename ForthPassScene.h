#ifndef __myFinalProject__ForthPassScene__
#define __myFinalProject__ForthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "FifthPassScene.h"
#include "SceneBuilder.h"

USING_NS_CC;

class ForthPass : public GameBackground
{
    
public:
    
    static cocos2d::Scene* createScene();
    virtual bool init();
    virtual void update(float dt);
    CREATE_FUNC(ForthPass);

private:
	vector<cocos2d::Sprite *> brick_vec;
	vector<cocos2d::Sprite *> moving_brick_vec;
	vector<cocos2d::Sprite *> thorn_vec;
	vector<cocos2d::Sprite *> moving_thorn_vec;
    
};

#endif /* defined(__myFinalProject__ForthPassScene__) */
