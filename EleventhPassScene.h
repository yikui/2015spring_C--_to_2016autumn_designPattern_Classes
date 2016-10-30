#ifndef __myFinalProject__EleventhPassScene__
#define __myFinalProject__EleventhPassScene__

#include <stdio.h>
#include "cocos2d.h"
#include "gamebackground.h"
#include "TwelfthPassScene.h"

class	EleventhPass : public GameBackground
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void update(float dt);
    
	void setthorn(int x, int y, Sprite * thorn);

    CREATE_FUNC(EleventhPass);
};

#endif