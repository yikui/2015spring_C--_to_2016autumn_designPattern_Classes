#ifndef _Entity_H_
#define _Entity_H_
#include "cocos2d.h"


using namespace cocos2d;
class Entity: public Node
{
public:
	Entity();
	~Entity();
	Sprite* getSprite();
	Sprite* getmSprite();
	void bindSprite( Sprite* sprite );
	void bindmSprite( Sprite* msprite );
	void setTagPosition( int x, int y );
    Point getCurrentPosition();
//    virtual bool init();
protected:
	Sprite* m_sprite;
	Sprite* m_msprite;
};
#endif