#ifndef _ThirdPassScene
#define _ThirdPassScene

#include "cocos2d.h"
#include "gamebackground.h"
#include "NinthPassScene.h"

class EighthPass:public GameBackground
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC( EighthPass );
	void update( float dt );
private:
	PhysicsBody* body1, * body2;
	int time1;
	
};

#endif