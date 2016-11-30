#include "SceneBuilder.h"


void SceneBuilder::setBrick(cocos2d::Sprite *&brick, string url, int x, int y)
{
	sadpt->createSprite(brick, url);
	sadpt->setPosition(brick, x, y);
}
void SceneBuilder::setBrickPhysics(cocos2d::Sprite *&brick, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp)
{
	sadpt->setPhysicsBody(brick, is_edge, den, res, fri);
	sadpt->setVelocity(brick, vx, vy);
	sadpt->setGroup(brick, num_grp);
}

void SceneBuilder::setMoveBrick(cocos2d::Sprite *&brick, string url, int x, int y)
{
	sadpt->createSprite(brick, url);
	sadpt->setPosition(brick, x, y);
}

void SceneBuilder::setMoveBrickPhysics(cocos2d::Sprite *&brick, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp)
{
	sadpt->setPhysicsBody(brick, is_edge, den, res, fri);
	sadpt->setVelocity(brick, vx, vy);
	sadpt->setGroup(brick, num_grp);
}

void SceneBuilder::setThorn(cocos2d::Sprite *&thorn, string url, int x, int y)
{
	sadpt->createSprite(thorn, url);
	sadpt->setPosition(thorn, x, y);
}

void SceneBuilder::setThornPhysics(cocos2d::Sprite *&thorn, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp)
{
	sadpt->setPhysicsBody(thorn, is_edge, den, res, fri);
	sadpt->setVelocity(thorn, vx, vy);
	sadpt->setGroup(thorn, num_grp);
}

void SceneBuilder::setMoveThorn(cocos2d::Sprite *&thorn, string url, int x, int y)
{
	sadpt->createSprite(thorn, url);
	sadpt->setPosition(thorn, x, y);
}

void SceneBuilder::setMoveThornPhysics(cocos2d::Sprite *&thorn, bool is_edge, float den, float res, float fri, float vx, float vy, int num_grp)
{
	sadpt->setPhysicsBody(thorn, is_edge, den, res, fri);
	sadpt->setVelocity(thorn, vx, vy);
	sadpt->setGroup(thorn, num_grp);
}