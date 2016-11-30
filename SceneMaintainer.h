#ifndef __myFinalProject__SceneMaintainer__
#define __myFinalProject__SceneMaintainer__

#include <stdio.h>
#include <string>
#include "cocos2d.h"
#include "SpriteAdapter.h"

class SceneMaintainer
{
public:
	SceneMaintainer()
	{
		sadpt = new SpriteAdapter();
	}
	void setMoveBrickVel(cocos2d::Sprite*& brick, float vx, float vy);
	void setMoveThornVel(cocos2d::Sprite*& thorn, float vx, float vy);
private:
	SpriteAdapter* sadpt;
};

#endif /* defined(__myFinalProject__SceneMaintainer__) */