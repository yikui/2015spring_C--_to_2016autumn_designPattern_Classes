#ifndef _ThirdPassScene
#define _ThirdPassScene

#include "cocos2d.h"
#include "gamebackground.h"
#include "NinthPassScene.h"
#include "SceneBuilder.h"

class EighthPass:public GameBackground
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC( EighthPass );
	void update( float dt );
private:
	PhysicsBody* body1, * body2;
	vector<cocos2d::Sprite *> brick_vec;
	vector<cocos2d::Sprite *> moving_brick_vec;
	vector<cocos2d::Sprite *> thorn_vec;
	vector<cocos2d::Sprite *> moving_thorn_vec;
	int time1;
	
};

#endif