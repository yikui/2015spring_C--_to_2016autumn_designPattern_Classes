#ifndef  _END_BACKGROUND_H_
#define  _END_BACKGROUND_H_

#include "cocos2d.h"
#include "menubackground.h"

class EndBackground : public cocos2d::Layer{
    
public:
    
	static cocos2d::Scene* createScene();
    
	virtual bool init();

    void popScene(Ref* psender);

	CREATE_FUNC(EndBackground);
};

#endif