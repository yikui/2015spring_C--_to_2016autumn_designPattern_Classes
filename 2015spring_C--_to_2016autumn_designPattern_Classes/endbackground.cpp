#include "endbackground.h"

USING_NS_CC;

Scene* EndBackground::createScene() {
	auto scene = Scene::create();
	auto layer = EndBackground::create();
	scene->addChild(layer);
	return scene;
}

bool EndBackground::init() {
    
	if ( !Layer::init() )
    {
        return false;
    }

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    auto backGround = Sprite::create("endbackground.png");
    backGround->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    addChild(backGround);

	Sprite *role = Sprite::create("role\\right1.png");
	role->setPosition(480, 320);
	addChild(role);

	Vector< SpriteFrame* > frameVec;
	SpriteFrame* frame = NULL;
	for ( int i = 1; i<= 6; ++ i)
	{
		frame = SpriteFrame::create( StringUtils::format( "role\\right%d.png", i ),Rect( 0, 0, 16, 32) );
		frameVec.pushBack( frame );
	}
	Animation* animation = Animation::createWithSpriteFrames( frameVec );
	animation -> setLoops( -1 );
	animation -> setRestoreOriginalFrame( true );
	animation -> setDelayPerUnit( 0.03f );

	role->runAction(Animate::create(animation));

	auto gamemenuitem = MenuItemImage::create("gamemenubutton1.png",
                                              "gamemenubutton.png",
                                              this,
                                              menu_selector(EndBackground::popScene));

    gamemenuitem->setPosition(Point(origin.x + 120, origin.y + 40));

	auto gbmenu = Menu::create(gamemenuitem, NULL);
    gbmenu->setPosition(Point::ZERO);
    this->addChild(gbmenu);
    
    return true;
}

void EndBackground::popScene(Ref* psender) {
	Director::getInstance()->popScene();
}