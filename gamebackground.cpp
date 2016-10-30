#include "gamebackground.h"

USING_NS_CC;

Scene* GameBackground::createScene() {
	auto scene = Scene::create();
	auto layer = GameBackground::create();
	scene->addChild(layer);
	return scene;
}

bool GameBackground::init() {
    
	if ( !Layer::init() )
    {
        return false;
    }
    
    control1 = KeyboardController::create();
    
    return true;
    
}


void GameBackground::baseWork()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

	auto gamemenuitem = MenuItemImage::create("gamemenubutton0.png",
                                              "gamemenubutton.png",
                                              this,
                                              menu_selector(GameBackground::popScene));

    gamemenuitem->setPosition(Point(origin.x + 120, origin.y + 40));

	auto gbmenu = Menu::create(gamemenuitem, NULL);
    gbmenu->setPosition(Point::ZERO);
    this->addChild(gbmenu, 1);

    auto backGround = Sprite::create("gameback\\background.png");
    backGround->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    addChild(backGround);
    
    auto upGround = Sprite::create("gameback\\upground.png");
    upGround->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2 + 5));
    addChild(upGround);
    
    auto downGround = Sprite::create("gameback\\downground.png");
    downGround->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2 - 5));
    addChild(downGround);
    
    auto physicsBody1 = PhysicsBody::createBox(Size(1440, 10), PhysicsMaterial(1.0f, 1.0f, 0.0f));
    auto physicsBody2 = PhysicsBody::createBox(Size(1440, 10), PhysicsMaterial(1.0f, 1.0f, 0.0f));
    physicsBody1->setDynamic(false);
    physicsBody2->setDynamic(false);
    physicsBody1->setContactTestBitmask(1);
    physicsBody2->setContactTestBitmask(1);
    
    upGround->setPhysicsBody(physicsBody1);
    downGround->setPhysicsBody(physicsBody2);

    role = Sprite::create( "role\\left1.png" );
    mrole = Sprite::create( "role\\left_1.png" );
    
    role->setAnchorPoint(Vec2(0, 0));
    mrole->setAnchorPoint(Vec2(0, 0));

    Player* player = Player::create();
    
    role->setPosition( 10, visibleSize.height/2 + 10 );
    mrole-> setPosition( 10, visibleSize.height/2 - 10 );
    
    player -> bindSprite( role );
    player -> bindmSprite( mrole );
    this ->addChild( player );
    
    control1 -> setPlayer( player );
    this -> addChild( control1 );
    
    auto listener = EventListenerKeyboard::create();
    listener->onKeyPressed = CC_CALLBACK_2(KeyboardController::KBcontrolPress, control1);
    listener->onKeyReleased = CC_CALLBACK_2(KeyboardController::KBcontrolRelease, control1);
    
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}

void GameBackground::popScene(Ref* psender) {
	Director::getInstance()->popScene();
}