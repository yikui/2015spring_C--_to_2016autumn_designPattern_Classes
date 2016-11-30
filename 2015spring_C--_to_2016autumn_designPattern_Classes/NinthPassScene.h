#ifndef _NinthPassScene_H_
#define _NinthPassScene_H_

#include "cocos2d.h"
#include "gamebackground.h"
#include "TenthPassScene.h"

using namespace cocos2d;

class NinthPass: public GameBackground
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC( NinthPass );
	void update( float dt );
private:
	PhysicsBody *upThornBody4, *upThornBody5, *downThornBody5, *downThornBody4;
	PhysicsBody *upBrickBody, * downBrickBody;
	int itime;
};
#endif