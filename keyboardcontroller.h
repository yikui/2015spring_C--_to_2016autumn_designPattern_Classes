#ifndef _KeyboardController_H_
#define _KeyboardController_H_

 
#include "cocos2d.h"
#include "Player.h"
using namespace cocos2d;

class KeyboardController: public Layer
{
public:
	CREATE_FUNC( KeyboardController );
	virtual bool init();
	void setPlayer( Player* player );
	virtual void KBcontrolPress(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* pevent );
	virtual void KBcontrolRelease( cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* pevent );
	Player* getPlayer();
	virtual void update(float t);
	PhysicsBody* body1() {return body11;}
	PhysicsBody* body2() {return body22;}
private:
	Player* m_player;
	bool right_p, left_p, jump_p, onfloor_p;
	int left_v, right_v, jump_v;
    int jump_a;
    Sprite *sprite, *msprite;
    PhysicsBody *body11, *body22;
};
#endif