#include "Entity.h"

Entity::Entity()
{
	m_sprite = NULL;
}

Entity::~Entity()
{}

Sprite* Entity::getSprite()
{
	return m_sprite;
}

Sprite* Entity::getmSprite()
{
	return m_msprite;
}

void Entity::bindSprite( Sprite* sprite )
{
	m_sprite = sprite;
	this -> addChild( sprite );
}

void Entity::bindmSprite( Sprite* msprite )
{
	m_msprite = msprite;
	this -> addChild( msprite );
}

void Entity::setTagPosition( int x, int y )
{
	setPosition( Point( x, y ) );
}

Point Entity::getCurrentPosition()
{
	return getPosition();
}