#ifndef __myFinalProject__SixthPassScene__
#define __myFinalProject__SixthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "SeventhPassScene.h"
#include "SceneBuilder.h"

class SixthPass: public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    virtual bool init();
    virtual void update(float dt);
    CREATE_FUNC(SixthPass);

private:
	vector<cocos2d::Sprite *> brick_vec;
	vector<cocos2d::Sprite *> moving_brick_vec;
	vector<cocos2d::Sprite *> thorn_vec;
	vector<cocos2d::Sprite *> moving_thorn_vec;
    
};

#endif /* defined(__myFinalProject__SixthPassScene__) */
