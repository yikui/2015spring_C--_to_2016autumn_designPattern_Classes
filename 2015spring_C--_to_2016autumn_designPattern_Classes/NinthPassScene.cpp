#include "NinthPassScene.h"

Scene* NinthPass::createScene()
{
	Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity( Vec2(0, 0));

	Layer* layer = NinthPass::create();
	scene ->addChild( layer );
	return scene;
}

bool NinthPass::init()
{
	if ( ! GameBackground::init() ) {
		return false;
	}
	baseWork();
	Label* label = Label::createWithSystemFont(" To be successful you must be quick. ", "MarketFelt", 32 );
	label -> setColor( Color3B::BLACK );
	label -> setPosition( Vec2( 480, 600 ) );
	this -> addChild( label );
	itime = 0;
	Sprite* upPlatform1 = Sprite::create( "chapter9\\9upplatform1.png" );
	upPlatform1 -> setPosition( Vec2( 110, 345 ) );
	auto upbody1 = PhysicsBody::createEdgeBox( upPlatform1 -> getContentSize());
	upbody1 -> setContactTestBitmask( 1 );
	upPlatform1 -> setPhysicsBody( upbody1 );
	this -> addChild( upPlatform1 );

	Sprite* downPlatform1 = Sprite::create( "chapter9\\9downplatform1.png" );
	downPlatform1 -> setPosition( Vec2( 110, 295 ) );
	auto downbody1 = PhysicsBody::createEdgeBox( downPlatform1 -> getContentSize() );
	downbody1 -> setContactTestBitmask( 1 );
	downPlatform1 -> setPhysicsBody( downbody1 );
	this -> addChild( downPlatform1 );

	Sprite* upPlatform2 = Sprite::create( "chapter9\\9upplatform2.png" );
	upPlatform2 -> setPosition( Vec2( 335, 345 ) );
	auto upbody2 = PhysicsBody::createEdgeBox( upPlatform2 -> getContentSize());
	upbody2 -> setContactTestBitmask( 1 );
	upPlatform2 -> setPhysicsBody( upbody2 );
	this -> addChild( upPlatform2 );

	Sprite* downPlatform2 = Sprite::create( "chapter9\\9downplatform2.png" );
	downPlatform2 -> setPosition( Vec2( 335, 295 ) );
	auto downbody2 = PhysicsBody::createEdgeBox( downPlatform2 -> getContentSize() );
	downbody2 -> setContactTestBitmask( 1 );
	downPlatform2 -> setPhysicsBody( downbody2 );
	this -> addChild( downPlatform2 );

	Sprite* upPlatform3 = Sprite::create( "chapter9\\9upplatform3.png" );
	upPlatform3 -> setPosition( Vec2( 590, 345 ) );
	auto upbody3 = PhysicsBody::createEdgeBox( upPlatform3 -> getContentSize());
	upbody3-> setContactTestBitmask( 1 );
	upPlatform3 -> setPhysicsBody( upbody3 );
	this -> addChild( upPlatform3 );

	Sprite* downPlatform3 = Sprite::create( "chapter9\\9downplatform3.png" );
	downPlatform3 ->setPosition( Vec2( 590, 295 ) );
	auto downbody3 = PhysicsBody::createEdgeBox( downPlatform3 -> getContentSize() );
	downbody3->setContactTestBitmask( 1 );
	downPlatform3 -> setPhysicsBody( downbody3 );
	this -> addChild( downPlatform3 );

	Sprite* upThorn1 = Sprite::create( "chapter9\\9downthorn1.png" );
	upThorn1 -> setPosition( Vec2( 340, 364 ) );
	auto upThornBody1 = PhysicsBody::createEdgeBox( upThorn1 -> getContentSize() );
	upThorn1 -> setPhysicsBody( upThornBody1 );
	upThornBody1 -> setContactTestBitmask( 1 );
	upThornBody1 -> setGroup( 2 );
	this -> addChild( upThorn1 );
    

	Sprite* downThorn1 = Sprite::create( "chapter9\\9downthorn1.png" );
	downThorn1 -> setPosition( Vec2( 340, 276) );
	auto downThornBody1 = PhysicsBody::createEdgeBox( downThorn1 -> getContentSize() );
	downThorn1 -> setPhysicsBody( downThornBody1 );
	downThornBody1 -> setContactTestBitmask( 1 );
	downThornBody1 -> setGroup( 2 );
	this -> addChild( downThorn1 );
	
	Sprite* upThorn2 = Sprite::create( "chapter9\\9upthorn2.png" );
	upThorn2 -> setPosition( Vec2( 775, 334 ) );
	auto upThornBody2 = PhysicsBody::createEdgeBox( upThorn2 -> getContentSize() );
	upThornBody2 -> setContactTestBitmask( 1 );
	upThornBody2 -> setGroup(2);
	upThorn2 -> setPhysicsBody( upThornBody2 );
	this -> addChild( upThorn2 );

	Sprite* downThorn2 = Sprite::create( "chapter9\\9downthorn2.png" );
	downThorn2 -> setPosition( Vec2( 775, 306 ) );
	auto downThornBody2 = PhysicsBody::createEdgeBox( downThorn2 -> getContentSize() );
	downThornBody2 -> setContactTestBitmask( 1 );
	downThornBody2 -> setGroup(2);
	downThorn2 -> setPhysicsBody( downThornBody2 );
	this -> addChild( downThorn2 );

	Sprite* upBrick = Sprite::create( "chapter9\\9upbrick1.png" );
	upBrick -> setPosition( Vec2( 695,374) );
	upBrickBody = PhysicsBody::createBox( upBrick -> getContentSize(),PhysicsMaterial(1000000.0f, 0.4f, 0.0f) );
	upBrickBody -> setContactTestBitmask( 1 );
	upBrickBody -> setGroup( 1 );
	upBrickBody -> setVelocity( Vec2( 50, 0 ) );
	upBrick -> setPhysicsBody( upBrickBody );
	this -> addChild( upBrick );

	Sprite* downBrick = Sprite::create( "chapter9\\9upbrick1.png" );
	downBrick -> setPosition( Vec2( 695, 266 ) );
	downBrickBody = PhysicsBody::createBox( downBrick -> getContentSize(),PhysicsMaterial(1000000.0f, 0.4f, 0.0f) );
	downBrickBody -> setContactTestBitmask( 1 );
	downBrickBody -> setVelocity( Vec2( 50, 0 ) );
	downBrickBody -> setGravityEnable( 1 );
	downBrickBody -> setGroup( 1 );
	downBrick -> setPhysicsBody( downBrickBody );
	this -> addChild( downBrick );

	Sprite* upThorn3 = Sprite::create( "chapter9\\9downthorn1.png" );
	upThorn3 -> setPosition( Vec2( 590, 364 ) );
	auto upThornBody3 = PhysicsBody::createEdgeBox( upThorn3 -> getContentSize() );
	upThorn3 -> setPhysicsBody( upThornBody3 );
	upThornBody3 -> setContactTestBitmask( 1 );
	upThornBody3 -> setGroup( 2 );
	this -> addChild( upThorn3 );
    

	Sprite* downThorn3 = Sprite::create( "chapter9\\9downthorn1.png" );
	downThorn3 -> setPosition( Vec2( 590 , 276) );
	auto downThornBody3 = PhysicsBody::createEdgeBox( downThorn3 -> getContentSize() );
	downThorn3 -> setPhysicsBody( downThornBody3 );
	downThornBody3 -> setContactTestBitmask( 1 );
	downThornBody3 -> setGroup( 2 );
	this -> addChild( downThorn3 );

	Sprite* upThorn4 = Sprite::create( "chapter9\\9downthorn1.png" );
	upThorn4 -> setPosition( Vec2( 180, 335 ) );
	upThornBody4 = PhysicsBody::createBox( upThorn4 -> getContentSize() );
	upThorn4 -> setPhysicsBody( upThornBody4 );
	upThornBody4 -> setContactTestBitmask( 1 );
	upThornBody4 -> setGroup( 2 );
	upThornBody4 -> setVelocity( Vec2( 50, 0 ) );
	this -> addChild( upThorn4 );
    

	Sprite* downThorn4 = Sprite::create( "chapter9\\9downthorn1.png" );
	downThorn4 -> setPosition( Vec2( 180, 303) );
	downThornBody4 = PhysicsBody::createBox( downThorn4 -> getContentSize() );
	downThorn4 -> setPhysicsBody( downThornBody4 );
	downThornBody4 -> setContactTestBitmask( 1 );
	downThornBody4 -> setGroup( 2 );
	downThornBody4 -> setVelocity( Vec2( 50, 0 ) );
	this -> addChild( downThorn4 );

	Sprite* upThorn5 = Sprite::create( "chapter9\\9downthorn1.png" );
	upThorn5 -> setPosition( Vec2( 420, 335 ) );
	upThornBody5 = PhysicsBody::createBox( upThorn5 -> getContentSize() );
	upThorn5 -> setPhysicsBody( upThornBody5 );
	upThornBody5 -> setContactTestBitmask( 1 );
	upThornBody5 -> setGroup( 2 );
	upThornBody5 -> setVelocity( Vec2( 50, 0 ) );
	this -> addChild( upThorn5 );
    

	Sprite* downThorn5 = Sprite::create( "chapter9\\9downthorn1.png" );
	downThorn5 -> setPosition( Vec2( 420, 303) );
	downThornBody5 = PhysicsBody::createBox( downThorn5 -> getContentSize() );
	downThorn5 -> setPhysicsBody( downThornBody5 );
	downThornBody5 -> setContactTestBitmask( 1 );
	downThornBody5 -> setGroup( 2 );
	downThornBody5 -> setVelocity( Vec2( 50, 0 ) );
	this -> addChild( downThorn5 );

	auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
    listener2->onContactBegin = [](PhysicsContact& contact) {
		auto scene = NinthPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	auto listener1 = EventListenerPhysicsContactWithGroup::create(1);
	listener1->onContactPreSolve = [this](PhysicsContact& contact, PhysicsContactPreSolve& solve) {
		if (control1->body1()->getVelocity().x == 0)
		{
			control1->body1()->setVelocity(Vec2( upBrickBody->getVelocity().x, control1->body1()->getVelocity().y));
			control1->body2()->setVelocity(Vec2( downBrickBody->getVelocity().x, control1->body2()->getVelocity().y));
		}
		return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener1, this);

	schedule(schedule_selector(NinthPass::update), 0.1f);

	return true;
}

void NinthPass::update( float dt )
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    ++ itime;
    itime = itime % 15;

	if ( itime == 0)	
	{
		upThornBody4 ->setVelocity( Vec2( -upThornBody4 ->getVelocity().x, 0 ) );
	    upThornBody5 ->setVelocity( Vec2( -upThornBody5 ->getVelocity().x, 0 ) );
		downThornBody4 ->setVelocity( Vec2( -downThornBody4 ->getVelocity().x, 0 ) );
		downThornBody5 ->setVelocity( Vec2( -downThornBody5 ->getVelocity().x, 0 ) );
		upBrickBody -> setVelocity( Vec2( -upBrickBody ->getVelocity().x, 0 ) );
		downBrickBody -> setVelocity( Vec2( -downBrickBody->getVelocity().x, 0 ) );
	}

	
   if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(TenthPass::createScene());
    }
}