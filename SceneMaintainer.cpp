#include "SceneMaintainer.h"

USING_NS_CC;

void SceneMaintainer::setMoveBrickVel(cocos2d::Sprite*& brick, float vx, float vy)
{
	sadpt->setVelocity(brick, vx, vy);
}

void SceneMaintainer::setMoveThornVel(cocos2d::Sprite*& thorn, float vx, float vy)
{
	sadpt->setVelocity(thorn, vx, vy);
}