#include "SeventhPassScene.h"

Scene* SeventhPass::createScene()
{
	Scene* scene = Scene::createWithPhysics();
	scene ->getPhysicsWorld() -> setGravity( Vect( 0 , 0 ) );
	Layer* layer = SeventhPass::create();
	scene -> addChild( layer );
	return scene;
}

bool SeventhPass::init()
{
	if ( ! GameBackground::init() ) {
		return false;
	}
	baseWork();

	Label* label = Label::createWithSystemFont(" Somtimes you must be careful about the hidden things. ", "MarketFelt", 32 );
	label -> setColor( Color3B::BLACK );
	label -> setPosition( Vec2( 480, 600 ) );
	this -> addChild( label );
	Sprite* upThorn1 = Sprite::create( "chapter7\\7downthorn1.png" );
	upThorn1 ->setPosition( Vec2( 125, 334 ) );
	auto upThornBody1 = PhysicsBody::createEdgeBox( upThorn1 -> getContentSize() );
	upThorn1 ->setPhysicsBody( upThornBody1 );
	upThornBody1 -> setContactTestBitmask( 1 );
	upThornBody1 -> setGroup( 2 );
	this -> addChild( upThorn1 );

	Sprite* downThorn1 = Sprite::create( "chapter7\\7downthorn1.png" );
	downThorn1 -> setPosition( Vec2( 125, 306 ) );
	auto downThornBody1 = PhysicsBody::createEdgeBox( downThorn1 -> getContentSize() );
	downThorn1 -> setPhysicsBody( downThornBody1 );
	downThornBody1 -> setContactTestBitmask( 1 );
	downThornBody1 -> setGroup( 2 );
	this -> addChild( downThorn1 );

	Sprite* upThorn2 = Sprite::create( "chapter7\\7downthorn3.png" );
	upThorn2 ->setPosition( Vec2( 350, 334 ) );
	auto upThornBody2 = PhysicsBody::createEdgeBox( upThorn2 -> getContentSize() );
	upThorn2 ->setPhysicsBody( upThornBody2 );
	upThornBody2 -> setContactTestBitmask( 1 );
	upThornBody2 -> setGroup( 2 );
	this -> addChild( upThorn2 );

	Sprite* downThorn2 = Sprite::create( "chapter7\\7downthorn3.png" );
	downThorn2 -> setPosition( Vec2( 350, 306 ) );
	auto downThornBody2 = PhysicsBody::createEdgeBox( downThorn2 -> getContentSize() );
	downThorn2 -> setPhysicsBody( downThornBody2 );
	downThornBody2 -> setContactTestBitmask( 1 );
	downThornBody2 -> setGroup( 2 );
	this -> addChild( downThorn2 );
	
	Sprite* upSquare = Sprite::create( "chapter7\\7upsquare1.png" );
	upSquare-> setPosition( Vec2( 342, 353 ) );
	auto upSquareBody = PhysicsBody::createEdgeBox( upSquare -> getContentSize() );
	upSquare -> setPhysicsBody( upSquareBody );
	upSquareBody -> setContactTestBitmask( 1 );
	this -> addChild( upSquare );

	Sprite* downSquare = Sprite::create( "chapter7\\7downsquare1.png" );
	downSquare -> setPosition( Vec2( 342, 289 ) );
	auto downSquareBody = PhysicsBody::createEdgeBox( downSquare -> getContentSize() );
	downSquare -> setPhysicsBody( downSquareBody );
	this -> addChild( downSquare );

	Sprite* upThorn3 = Sprite::create( "chapter7\\7downthorn1.png" );
	upThorn3 ->setPosition( Vec2( 525, 334 ) );
	auto upThornBody3 = PhysicsBody::createEdgeBox( upThorn3 -> getContentSize() );
	upThorn3 ->setPhysicsBody( upThornBody3 );
	upThornBody3 -> setContactTestBitmask( 1 );
	upThornBody3 -> setGroup( 2 );
	this -> addChild( upThorn3 );

	Sprite* downThorn3 = Sprite::create( "chapter7\\7downthorn1.png" );
	downThorn3 -> setPosition( Vec2( 525, 306 ) );
	auto downThornBody3 = PhysicsBody::createEdgeBox( downThorn3 -> getContentSize() );
	downThorn3 -> setPhysicsBody( downThornBody3 );
	downThornBody3 -> setContactTestBitmask( 1 );
	downThornBody3 -> setGroup( 2 );
	this -> addChild( downThorn3 );

	
	Sprite* upThorn5 = Sprite::create( "chapter7\\7downthorn1.png" );
	upThorn5 ->setPosition( Vec2( 625, 334 ) );
	auto upThornBody5 = PhysicsBody::createEdgeBox( upThorn5 -> getContentSize() );
	upThorn5 ->setPhysicsBody( upThornBody5 );
	upThornBody5 -> setContactTestBitmask( 1 );
	upThornBody5 -> setGroup( 2 );
	this -> addChild( upThorn5 );

	Sprite* downThorn5 = Sprite::create( "chapter7\\7downthorn1.png" );
	downThorn5 -> setPosition( Vec2( 625, 306 ) );
	auto downThornBody5 = PhysicsBody::createEdgeBox( downThorn5 -> getContentSize() );
	downThorn5 -> setPhysicsBody( downThornBody5 );
	downThornBody5 -> setContactTestBitmask( 1 );
	downThornBody5 -> setGroup( 2 );
	this -> addChild( downThorn5 );

	Sprite* upThorn6 = Sprite::create( "chapter7\\7downthorn1.png" );
	upThorn6 ->setPosition( Vec2( 725, 334 ) );
	auto upThornBody6 = PhysicsBody::createEdgeBox( upThorn6 -> getContentSize() );
	upThorn6 ->setPhysicsBody( upThornBody6 );
	upThornBody6 -> setContactTestBitmask( 1 );
	upThornBody6 -> setGroup( 2 );
	this -> addChild( upThorn6 );

	Sprite* downThorn6 = Sprite::create( "chapter7\\7downthorn1.png" );
	downThorn6 -> setPosition( Vec2( 725, 306 ) );
	auto downThornBody6 = PhysicsBody::createEdgeBox( downThorn6 -> getContentSize() );
	downThorn6 -> setPhysicsBody( downThornBody6 );
	downThornBody6 -> setContactTestBitmask( 1 );
	downThornBody6 -> setGroup( 2 );
	this -> addChild( downThorn6 );

	Sprite* upThorn7 = Sprite::create( "chapter7\\7upthorn2.png" );
	upThorn7 ->setPosition( Vec2( 536, 334 ) );
	auto upThornBody7 = PhysicsBody::createEdgeBox( upThorn7 -> getContentSize() );
	upThorn7 ->setPhysicsBody( upThornBody7 );
	upThornBody7 -> setContactTestBitmask( 1 );
	upThornBody7 -> setGroup( 2 );
	this -> addChild( upThorn7 );

	Sprite* downThorn7 = Sprite::create( "chapter7\\7downthorn2.png" );
	downThorn7 -> setPosition( Vec2( 536, 306 ) );
	auto downThornBody7 = PhysicsBody::createEdgeBox( downThorn7 -> getContentSize() );
	downThorn7 -> setPhysicsBody( downThornBody7 );
	downThornBody7 -> setContactTestBitmask( 1 );
	downThornBody7 -> setGroup( 2 );
	this -> addChild( downThorn7 );

	Sprite* upThorn8 = Sprite::create( "chapter7\\7upthorn2.png" );
	upThorn8 ->setPosition( Vec2( 712, 334 ) );
	auto upThornBody8 = PhysicsBody::createEdgeBox( upThorn8 -> getContentSize() );
	upThorn8 ->setPhysicsBody( upThornBody8 );
	upThornBody8 -> setContactTestBitmask( 1 );
	upThornBody8 -> setGroup( 2 );
	this -> addChild( upThorn8 );

	Sprite* downThorn8 = Sprite::create( "chapter7\\7downthorn2.png" );
	downThorn8 -> setPosition( Vec2( 712, 306 ) );
	auto downThornBody8 = PhysicsBody::createEdgeBox( downThorn8 -> getContentSize() );
	downThorn8 -> setPhysicsBody( downThornBody8 );
	downThornBody8 -> setContactTestBitmask( 1 );
	downThornBody8 -> setGroup( 2 );
	this -> addChild( downThorn8 );

	auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
    listener2->onContactBegin = [](PhysicsContact& contact) {
		auto scene = SeventhPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	schedule(schedule_selector(SeventhPass::update), 0.1f);

	return true;
}

void SeventhPass::update( float dt )
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
	
   if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(EighthPass::createScene());
    }
}