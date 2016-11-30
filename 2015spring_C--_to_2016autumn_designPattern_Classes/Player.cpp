#include "Player.h"

Player::Player() {}

Player::~Player() {}

bool Player::init()
{
    
	return true;
}

Animation* Player::createWithSingleFrameName( const char * name, float delay, int iLoops, control idirection )
{
	Vector< SpriteFrame* > frameVec;
	SpriteFrame* frame = NULL;
	if ( idirection == e_left || idirection == e_right )
	{
	     for ( int i = 1; i<= 6; ++ i)
	    {
		   frame = SpriteFrame::create( StringUtils::format( "role\\%s%d.png",name, i ),Rect( 0, 0, 16, 32) );
		   frameVec.pushBack( frame );
	    }
	}
	Animation* animation = Animation::createWithSpriteFrames( frameVec );
	animation -> setLoops( iLoops );
	animation -> setRestoreOriginalFrame( true );
	animation -> setDelayPerUnit( delay );
	return animation;
}


void Player::RunRight()
{
	Animation* right = createWithSingleFrameName( "right", 0.03f, 1,e_right );
	Sprite* sprite = getSprite();
	sprite -> runAction( Animate::create( right ) );
}


void Player::RunLeft()
{
	Animation* left = createWithSingleFrameName( "left", 0.03f, 1, e_left );
	Sprite* sprite = getSprite();
	sprite -> runAction( Animate::create( left ) );
}


void Player::RunLeftMirror()
{
	Animation*  mleft = createWithSingleFrameName( "left_", 0.03f, 1, e_left );
	Sprite* msprite = getmSprite();
	msprite -> runAction( Animate::create( mleft ) );
}


void Player::RunRightMirror()
{
	Animation* mright = createWithSingleFrameName( "right_", 0.03f, 1, e_right );
	Sprite* msprite = getmSprite();
	msprite -> runAction( Animate::create( mright ) );
}
