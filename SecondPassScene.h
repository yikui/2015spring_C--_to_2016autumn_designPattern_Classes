#ifndef __myFinalProject__SecondPassScene__
#define __myFinalProject__SecondPassScene__

#include <stdio.h>
#include <vector>
#include "cocos2d.h"
#include "gamebackground.h"
#include "ThirdPassScene.h"
#include "SceneBuilder.h"

class SecondPass : public GameBackground
{
    
public:  
    static cocos2d::Scene* createScene();
    virtual bool init();
    void update(float dt);
    CREATE_FUNC(SecondPass);

private:
	vector<cocos2d::Sprite *> brick_vec;
	vector<cocos2d::Sprite *> moving_brick_vec;
	vector<cocos2d::Sprite *> thorn_vec;
	vector<cocos2d::Sprite *> moving_thorn_vec;

};

#endif
