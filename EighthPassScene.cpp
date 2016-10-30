#include "EighthPassScene.h"

Scene* EighthPass::createScene()
{
	Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));

	Layer* layer = EighthPass::create();
	scene ->addChild( layer );
	return scene;
}
bool EighthPass::init()
{
	if ( !GameBackground::init() ){
			return false;
	}

	baseWork();
	Label* label = Label::createWithSystemFont(" Answer sometimes exists in the opposite side ", "MarketFelt", 32 );
	label -> setColor( Color3B::BLACK );
	label -> setPosition( Vec2( 480, 600 ) );
	this -> addChild( label );
	Sprite* upPlatform1 = Sprite::create( "chapter8\\8upplatform1.png" );
	upPlatform1 -> setPosition( Vec2( 124, 360 ) );
	auto upbody1 = PhysicsBody::createEdgeBox( upPlatform1 -> getContentSize());
	upbody1 -> setContactTestBitmask( 1 );
	upPlatform1 -> setPhysicsBody( upbody1 );
	addChild( upPlatform1 );

	Sprite* downPlatform1 = Sprite::create( "chapter8\\8downplatform1.png" );
	downPlatform1 -> setPosition( Vec2( 124, 280 ) );
	auto downbody1 = PhysicsBody::createEdgeBox( downPlatform1 -> getContentSize() );
	downbody1 -> setContactTestBitmask( 1 );
	downPlatform1 -> setPhysicsBody( downbody1 );
	this -> addChild( downPlatform1 );

	Sprite* upPlatform2 = Sprite::create( "chapter8\\8upplatform2.png" );
	upPlatform2 -> setPosition( Vec2( 172, 390 ) );
	auto upbody2 = PhysicsBody::createEdgeBox( upPlatform2 -> getContentSize());
	upbody2 -> setContactTestBitmask( 1 );
	upPlatform2 -> setPhysicsBody( upbody2 );
	this -> addChild( upPlatform2 );

	Sprite* downPlatform2 = Sprite::create( "chapter8\\8downplatform2.png" );
	downPlatform2 -> setPosition( Vec2( 172, 250 ) );
	auto downbody2 = PhysicsBody::createEdgeBox( downPlatform2 -> getContentSize() );
	downbody2 -> setContactTestBitmask( 1 );
	downPlatform2 -> setPhysicsBody( downbody2 );
	this -> addChild( downPlatform2 );

	Sprite* upThorn1 = Sprite::create( "chapter8\\8upthorn2.png" );
	upThorn1 -> setPosition( Vec2( 421, 334 ) );
	auto upThornBody1 = PhysicsBody::createEdgeBox( upThorn1 -> getContentSize() );
	upThorn1 -> setPhysicsBody( upThornBody1 );
	upThornBody1 -> setContactTestBitmask( 1 );
	upThornBody1 -> setGroup( 2 );
	this -> addChild( upThorn1 );
    

	Sprite* downThorn1 = Sprite::create( "chapter8\\8downthorn2.png" );
	downThorn1 -> setPosition( Vec2( 421, 306 ) );
	auto downThornBody1 = PhysicsBody::createEdgeBox( downThorn1 -> getContentSize() );
	downThorn1 -> setPhysicsBody( downThornBody1 );
	downThornBody1 -> setContactTestBitmask( 1 );
	downThornBody1 -> setGroup( 2 );
	this -> addChild( downThorn1 );

	Sprite* upPlatform3 = Sprite::create( "chapter8\\8upplatform2.png" );
	upPlatform3 -> setPosition( Vec2( 670, 390 ) );
	auto upbody3 = PhysicsBody::createEdgeBox( upPlatform3 -> getContentSize());
	upbody3-> setContactTestBitmask( 1 );
	upPlatform3 -> setPhysicsBody( upbody3 );
	this -> addChild( upPlatform3 );

	Sprite* downPlatform3 = Sprite::create( "chapter8\\8upplatform2.png" );
	downPlatform3 ->setPosition( Vec2( 670, 250 ) );
	auto downbody3 = PhysicsBody::createEdgeBox( downPlatform3 -> getContentSize() );
	downbody3->setContactTestBitmask( 1 );
	downPlatform3 -> setPhysicsBody( downbody3 );
	this -> addChild( downPlatform3 );

	Sprite* upThorn2 = Sprite::create( "chapter8\\8upthorn1.png" );
	upThorn2 -> setPosition( Vec2( 745, 334 ) );
	auto upThornBody2 = PhysicsBody::createEdgeBox( upThorn2 -> getContentSize() );
	upThornBody2 -> setContactTestBitmask( 1 );
	upThornBody2 -> setGroup(2);
	upThorn2 -> setPhysicsBody( upThornBody2 );
	this -> addChild( upThorn2 );

	Sprite* downThorn2 = Sprite::create( "chapter8\\8upthorn1.png" );
	downThorn2 -> setPosition( Vec2( 745, 306 ) );
	auto downThornBody2 = PhysicsBody::createEdgeBox( downThorn2 -> getContentSize() );
	downThornBody2 -> setContactTestBitmask( 1 );
	downThornBody2 -> setGroup(2);
	downThorn2 -> setPhysicsBody( downThornBody2 );
	this -> addChild( downThorn2 );

	Sprite* upPlatform4 = Sprite::create( "chapter8\\8upplatform2.png" );
	upPlatform4 -> setPosition( Vec2( 844, 390 ) );
	auto upbody4 = PhysicsBody::createEdgeBox( upPlatform4 -> getContentSize());
	upbody4 -> setContactTestBitmask( 1 );
	upPlatform4 -> setPhysicsBody( upbody4 );
	this ->addChild( upPlatform4 );

	Sprite* downPlatform4 = Sprite::create( "chapter8\\8downplatform2.png" );
	downPlatform4 -> setPosition( Vec2( 844, 250 ) );
	auto downbody4 = PhysicsBody::createEdgeBox( downPlatform4 -> getContentSize() );
	downbody4 -> setContactTestBitmask( 1 );
	downPlatform4 -> setPhysicsBody( downbody4 );
	this -> addChild( downPlatform4 );
	
    Sprite* upBrick1 = Sprite::create("chapter8\\8downbrick.png");
	upBrick1->setPosition( Vec2( 304, 450) );
    body1 = PhysicsBody::createBox(upBrick1->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
	body1->setContactTestBitmask(1);
    body1->setGroup(1);
	upBrick1->setPhysicsBody(body1);
	body1->setVelocity( Vec2( 50, 0) );
	this -> addChild(upBrick1);

    Sprite* downBrick1 = Sprite::create("chapter8\\8downbrick.png");
    downBrick1->setPosition( Vec2( 304, 196 ) );
    body2 = PhysicsBody::createBox(downBrick1->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    body2->setContactTestBitmask(1);
    body2->setGroup(1);
    downBrick1->setPhysicsBody(body2);
    body2->setVelocity( Vec2( 50, 0) );
    this -> addChild(downBrick1);

	time1 =  0;
    
    auto listener1 = EventListenerPhysicsContactWithGroup::create(1);
	listener1->onContactPreSolve = [this](PhysicsContact& contact, PhysicsContactPreSolve& solve) {
		if (control1->body1()->getVelocity().x == 0)
		{
			control1->body1()->setVelocity(Vec2( body1->getVelocity().x, control1->body1()->getVelocity().y));
			control1->body2()->setVelocity(Vec2( body2->getVelocity().x, control1->body2()->getVelocity().y));
		}
		return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener1, this);

    auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
    listener2->onContactBegin = [](PhysicsContact& contact) {
		auto scene = EighthPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	schedule(schedule_selector(EighthPass::update), 0.1f);
	
	return true;
}

void EighthPass::update( float dt )
{
	Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    ++ time1;
    time1 = time1 % 45;

	if ( time1 == 0)	
	{
		body1->setVelocity( Vec2( -body1->getVelocity().x, 0) );
		body2->setVelocity( Vec2( -body2->getVelocity().x, 0) );
	}

	
   if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(NinthPass::createScene());
    }
}