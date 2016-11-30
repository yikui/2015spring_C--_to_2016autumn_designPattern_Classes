#ifndef __SpriteAdapter_H__
#define __SpriteAdapter_H__
#include <stdio.h>
#include<string>
#include "cocos2d.h"

USING_NS_CC;
using namespace std;

class SpriteAdapter: public cocos2d::Layer{
public:
	//create the sprite with the given path of the image
	void createSprite(Sprite*& sprite, string url);
	//set the sprite's position
	void setPosition(Sprite*& sprite, float x, float y);
	//create and set the physics body of the sprite
	void setPhysicsBody(Sprite*& sprite, bool is_edge, float den ,float res, float fri);
	//set the sprite's velocity
	void setVelocity(Sprite*& sprite, float vx, float vy);
	//set the group_num of the sprite
	void setGroup(Sprite*& sprite, int num_grp);
};
#endif