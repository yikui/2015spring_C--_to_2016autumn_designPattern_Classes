#ifndef _Player_H_
#define _Player_H_

#include "cocos2d.h"
#include "Entity.h"

using namespace cocos2d;
enum control{ e_left, e_right, e_jump};
class Player:public Entity
{
public:
	Player();
	~Player();
	CREATE_FUNC( Player );
	virtual bool init();
	static Animation* createWithSingleFrameName( const char * name, float delay, int iLoops, control idirection );
	void RunRight();
	void RunLeft();
	void RunLeftMirror();
	void RunRightMirror();
};
#endif