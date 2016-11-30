#include "menubackground.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* MenuBackground::createScene() {
	auto scene = Scene::create();
	auto layer = MenuBackground::create();
	scene->addChild(layer);
	return scene;
}

bool MenuBackground::init() {
	if ( !Layer::init() )
    {
        return false;
    }
    
	auto audio = CocosDenshion::SimpleAudioEngine::getInstance(); 
	audio->playBackgroundMusic("backgroundmusic.mp3", true); 

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    auto startgameitem = MenuItemImage::create(
                                           "menu\\startgamebutton0.png",
                                           "menu\\startgamebutton.png",
										   CC_CALLBACK_1(MenuBackground::menustartgame, this));

    startgameitem->setPosition(Point(origin.x + 600 - startgameitem->getContentSize().width/2 ,
                                origin.y + startgameitem->getContentSize().height/2 + 240));

    auto exitgameitem = MenuItemImage::create(
                                           "menu\\exitgamebutton0.png",
                                           "menu\\exitgamebutton.png",
										   CC_CALLBACK_1(MenuBackground::menuCloseCallback, this));

    exitgameitem->setPosition(Point(origin.x + 610 - exitgameitem->getContentSize().width/2 ,
                                origin.y + exitgameitem->getContentSize().height/2 + 80));

    auto musicturnon = MenuItemImage::create(
                                           "menu\\musicbutton0.png",
                                           "menu\\musicbutton.png");

    auto musicturnoff = MenuItemImage::create(
                                           "menu\\offmusicbutton0.png",
                                           "menu\\offmusicbutton.png");
	
	auto musicstage = MenuItemToggle::createWithCallback(CC_CALLBACK_1(MenuBackground::musicctr, this), musicturnon, musicturnoff, NULL);
	musicstage->setPosition(Point(origin.x + 900, origin.y + 560));
	musicof = true;

	auto mbmenu = Menu::create(startgameitem, exitgameitem, musicstage, NULL);
    mbmenu->setPosition(Point::ZERO);
    this->addChild(mbmenu, 1);

    auto sprite = Sprite::create("menu\\menubackground.png");
    sprite->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    this->addChild(sprite, 0);

	return true;
}

void MenuBackground::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}


void MenuBackground::menustartgame(Ref* pSender)
{
	auto scene = ChooseChapter::createScene();
	Director::getInstance()->pushScene(scene);
}

void MenuBackground::musicctr(Ref* pSender)
{
	if(musicof == true)
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
		musicof = false;
	}
	else
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
		musicof = true;
	}
}