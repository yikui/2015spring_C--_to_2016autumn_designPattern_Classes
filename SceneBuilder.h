#ifndef __myFinalProject__SceneBuilder__
#define __myFinalProject__SceneBuilder__

#include <stdio.h>
#include <string>
#include "cocos2d.h"
#include "SpriteAdapter.h"

USING_NS_CC;
using namespace std;

class SceneBuilder
{
public:
	SceneBuilder()
	{
		sadpt = new SpriteAdapter();
	}
	void setBrick(cocos2d::Sprite *&brick, string url, int x, int y);
	void setBrickPhysics(cocos2d::Sprite *&brick, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp);
	void setMoveBrick(cocos2d::Sprite *&brick, string url, int x, int y);
	void setMoveBrickPhysics(cocos2d::Sprite *&brick, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp);
	void setThorn(cocos2d::Sprite *&thorn, string url, int x, int y);
	void setThornPhysics(cocos2d::Sprite *&thorn, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp);
	void setMoveThorn(cocos2d::Sprite *&thorn, string url, int x, int y);
	void setMoveThornPhysics(cocos2d::Sprite *&thorn, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp);
private:
	SpriteAdapter* sadpt;
};

#endif /* defined(__myFinalProject__SceneBuilder__) */