#ifndef _SeventhPassScene_H_
#define _SeventhPassScene_H_

#include "cocos2d.h"
#include "gamebackground.h"
#include "EighthPassScene.h"

using namespace cocos2d;

class SeventhPass: public GameBackground
{
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC( SeventhPass );
	void update( float dt );
};
#endif