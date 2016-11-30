#include "KeyboardController.h"

bool KeyboardController::init()
{
	right_p = left_p = jump_p = onfloor_p = false;
	right_v = left_v = jump_v = 0;
    auto listener1 = EventListenerPhysicsContact::create();
    listener1->onContactBegin = [this](PhysicsContact & contact) {
        this->onfloor_p = true;
        return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener1, this);
    
	schedule(schedule_selector(KeyboardController::update), 0.18f);
	return true;
}
void KeyboardController::setPlayer( Player* player )
{
	m_player = player;
    Sprite* sprite = m_player -> getSprite();
    Sprite* msprite = m_player -> getmSprite();
    
    body11 = PhysicsBody::createBox(Size(16, 32), PhysicsMaterial(-100000.0f, 0.4f, 0.0f));
    body11->setRotationEnable(false);
    body11->setContactTestBitmask(1);
    
    body22 = PhysicsBody::createBox(Size(16, 32), PhysicsMaterial(-100000.0f, 0.4f, 0.0f));
    body22->setContactTestBitmask(1);
    body22->setRotationEnable(false);
    
    sprite->setPhysicsBody(body11);
    msprite->setPhysicsBody(body22);
}

Player* KeyboardController::getPlayer()
{
	return m_player;
}

void KeyboardController::KBcontrolPress( cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* pevent )
{
	switch( keyCode )
	{
	case cocos2d::EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		right_p = true;
		break;
	case cocos2d::EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		left_p = true;
		break;
	case cocos2d::EventKeyboard::KeyCode::KEY_UP_ARROW:
		if (onfloor_p == true)
		{
			jump_p = true;
			onfloor_p = false;
		}
		break;

	default:break;
	}
}
void KeyboardController::KBcontrolRelease( cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* pevent )
{
	switch( keyCode )
	{
	case cocos2d::EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
		right_p = false;
		break;
	case cocos2d::EventKeyboard::KeyCode::KEY_LEFT_ARROW:
		left_p = false;
		break;
	case cocos2d::EventKeyboard::KeyCode::KEY_UP_ARROW:
		break;
	default: break;
	}
}

void KeyboardController::update(float t)
{
	if (right_p == true)
	{
			m_player -> RunRight();
			m_player -> RunRightMirror();
            body11->setVelocity(Vec2( 120, body11->getVelocity().y));
            body22->setVelocity(Vec2( 120, body22->getVelocity().y));
	}
	else if (left_p == true)
	{
			m_player -> RunLeftMirror();
			m_player -> RunLeft();
            body11->setVelocity(Vec2( -120, body11->getVelocity().y));
            body22->setVelocity(Vec2( -120, body22->getVelocity().y));
	}
    else
    {
        body11->setVelocity(Vec2( 0, body11->getVelocity().y));
        body22->setVelocity(Vec2( 0, body22->getVelocity().y));
    }

    if ( jump_p == true )
    {
        body11->setVelocity(Vec2( body11->getVelocity().x, 300));
        body22->setVelocity(Vec2( body22->getVelocity().x, -300));
        jump_p = false;
    }

    body11->setVelocity(Vec2(body11->getVelocity().x, body11->getVelocity().y - 80));
    body22->setVelocity(Vec2(body22->getVelocity().x, body22->getVelocity().y + 80));
}
