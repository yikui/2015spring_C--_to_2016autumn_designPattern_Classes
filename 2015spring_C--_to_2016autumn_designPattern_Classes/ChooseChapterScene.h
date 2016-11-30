#ifndef __myFinalProject__ChooseChapterScene__
#define __myFinalProject__ChooseChapterScene__

#include <stdio.h>
#include <vector>
#include <string>
#include "cocos2d.h"

class ChooseChapter : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(ChooseChapter);
};

#endif