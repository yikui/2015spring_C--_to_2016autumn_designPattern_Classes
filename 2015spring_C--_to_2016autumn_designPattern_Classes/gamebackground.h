#ifndef  _GAME_BACKGROUND_H_
#define  _GAME_BACKGROUND_H_

#include "cocos2d.h"
#include "menubackground.h"
#include "KeyboardController.h"

class GameBackground : public Layer{
    
public:
    
	static cocos2d::Scene* createScene();
    
	virtual bool init();
    
    virtual void baseWork();
	
    void popScene(Ref* psender);

	CREATE_FUNC(GameBackground);
    
protected:
    
    cocos2d::Sprite* role;
    cocos2d::Sprite* mrole;
    
    KeyboardController* control1;
};

#endif