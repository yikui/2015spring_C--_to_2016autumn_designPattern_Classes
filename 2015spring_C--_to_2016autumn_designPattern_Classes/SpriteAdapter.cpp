#include "SpriteAdapter.h"

void SpriteAdapter::createSprite(Sprite*& sprite, string url)
{
	sprite = Sprite::create(url);
}
void SpriteAdapter::setPosition(Sprite*& sprite, float x, float y)
{
	sprite->setPosition(x, y);
}
void SpriteAdapter::setPhysicsBody(Sprite*& sprite,  bool is_edge, float den, float res, float fri)
{
	PhysicsBody* spriteBody;
	if (is_edge == true && den == 0){
		spriteBody = PhysicsBody::createEdgeBox(sprite->getContentSize());
	}
	else if (is_edge == true){
		spriteBody = PhysicsBody::createEdgeBox(sprite->getContentSize(), PhysicsMaterial(den, res, fri));
	}
	else if(is_edge == false && den != 0){
		spriteBody = PhysicsBody::createBox(sprite->getContentSize(), PhysicsMaterial(den, res, fri));
	}
	else if (is_edge == false && den == 0){
		spriteBody = PhysicsBody::createBox(sprite->getContentSize());
	}
	spriteBody->setContactTestBitmask(1);
	sprite->setPhysicsBody(spriteBody);
}
void SpriteAdapter::setVelocity(Sprite*& sprite, float vx, float vy)
{
	sprite->getPhysicsBody()->setVelocity(Vec2(vx, vy));
}
void SpriteAdapter::setGroup(Sprite*& sprite, int num_grp)
{
	sprite->getPhysicsBody()->setGroup(num_grp);
}
