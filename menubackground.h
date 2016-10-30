#ifndef  _MENU_BACKGROUND_H_
#define  _MENU_BACKGROUND_H_

#include "cocos2d.h"
#include "ChooseChapterScene.h"

class MenuBackground : public cocos2d::Layer{
    
public:
    
	static cocos2d::Scene* createScene();
	virtual bool init();
    void menuCloseCallback(cocos2d::Ref* pSender);
    void menustartgame(cocos2d::Ref* pSender);
	void musicctr(Ref* pSender);
	CREATE_FUNC(MenuBackground);
    
private:
	bool musicof;
};

#endif