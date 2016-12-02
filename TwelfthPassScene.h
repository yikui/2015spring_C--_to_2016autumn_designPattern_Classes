#ifndef __myFinalProject__TwelfthPassScene__
#define __myFinalProject__TwelfthPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "SceneBuilder.h"

class TwelfthPass: public GameBackground
{
public:
    static cocos2d::Scene* createScene();    
    virtual bool init();   
    virtual void update(float dt);    
    CREATE_FUNC(TwelfthPass);
    
private:
    cocos2d::PhysicsBody* up_brick1_move_body;
    cocos2d::PhysicsBody* down_brick1_move_body;
    cocos2d::PhysicsBody* up_brick2_move_body;
    cocos2d::PhysicsBody* down_brick2_move_body;

	vector<cocos2d::Sprite *> brick_vec;
	vector<cocos2d::Sprite *> moving_brick_vec;
	vector<cocos2d::Sprite *> thorn_vec;
	vector<cocos2d::Sprite *> moving_thorn_vec;

    int time1;
    
};

#endif /* defined(__myFinalProject__TwelfthPassScene__) */
