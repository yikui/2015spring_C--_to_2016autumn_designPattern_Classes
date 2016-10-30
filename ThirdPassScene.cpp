#include "ThirdPassScene.h"

USING_NS_CC;

Scene* ThirdPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vect(0, 0));
    Layer* layer = ThirdPass::create();
    scene->addChild(layer);
    return scene;
}

bool ThirdPass::init()
{
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

    auto mupbrick1 = Sprite::create("chapter3\\3upbrick1.png");
    auto mdownbrick1 = Sprite::create("chapter3\\3downbrick1.png");
    mupbrick1->setPosition(Vec2(280, 384));
    mdownbrick1->setPosition(Vec2(280, 256));
    addChild(mupbrick1);
    addChild(mdownbrick1);
    pmupbrick1 = PhysicsBody::createBox(mupbrick1->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    pmdownbrick1 = PhysicsBody::createBox(mdownbrick1->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    pmupbrick1->setContactTestBitmask(1);
    pmupbrick1->setGroup(1);
    pmdownbrick1->setContactTestBitmask(1);
    pmdownbrick1->setGroup(1);
    mupbrick1->setPhysicsBody(pmupbrick1);
    mdownbrick1->setPhysicsBody(pmdownbrick1);
	pmupbrick1->setVelocity(Vec2( 50, 0));
    pmdownbrick1->setVelocity(Vec2( 50, 0));
	pm1 = 0;

    auto upbrick1 = Sprite::create("chapter3\\3upbrick1.png");
    auto downbrick1 = Sprite::create("chapter3\\3downbrick1.png");
    upbrick1->setPosition(Vec2(205, 384));
    downbrick1->setPosition(Vec2(205, 256));
    addChild(upbrick1);
    addChild(downbrick1);
    auto pupbrick1 = PhysicsBody::createEdgeBox(upbrick1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    auto pdownbrick1 = PhysicsBody::createEdgeBox(downbrick1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupbrick1->setContactTestBitmask(1);
    pdownbrick1->setContactTestBitmask(1);
    upbrick1->setPhysicsBody(pupbrick1);
    downbrick1->setPhysicsBody(pdownbrick1);

    auto upbrick2 = Sprite::create("chapter3\\3upbrick1.png");
    auto downbrick2 = Sprite::create("chapter3\\3downbrick1.png");
    upbrick2->setPosition(Vec2(755, 384));
    downbrick2->setPosition(Vec2(755, 256));
    addChild(upbrick2);
    addChild(downbrick2);
    auto pupbrick2 = PhysicsBody::createEdgeBox(upbrick2->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    auto pdownbrick2 = PhysicsBody::createEdgeBox(downbrick2->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupbrick2->setContactTestBitmask(1);
    pdownbrick2->setContactTestBitmask(1);
    upbrick2->setPhysicsBody(pupbrick2);
    downbrick2->setPhysicsBody(pdownbrick2);

	auto upthorn1 = Sprite::create("chapter3\\3upthorn1.png");    
    upthorn1->setPosition(Vec2(480, 334));
    addChild(upthorn1);
    auto pupthorn1 = PhysicsBody::createEdgeBox(upthorn1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupthorn1->setContactTestBitmask(1);
    pupthorn1->setGroup(2);
    upthorn1->setPhysicsBody(pupthorn1);
	auto downthorn1 = Sprite::create("chapter3\\3downthorn1.png");    
    downthorn1->setPosition(Vec2(480, 306));
    addChild(downthorn1);
    auto pdownthornp1 = PhysicsBody::createEdgeBox(downthorn1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pdownthornp1->setContactTestBitmask(1);
    pdownthornp1->setGroup(2);
    downthorn1->setPhysicsBody(pdownthornp1);

    auto listener1 = EventListenerPhysicsContactWithGroup::create(1);
	listener1->onContactPreSolve = [this](PhysicsContact& contact, PhysicsContactPreSolve& solve) {
		if (control1->body1()->getVelocity().x == 0)
		{
			control1->body1()->setVelocity(Vec2( pmupbrick1->getVelocity().x, control1->body1()->getVelocity().y));
			control1->body2()->setVelocity(Vec2( pmdownbrick1->getVelocity().x, control1->body2()->getVelocity().y));
		}
		return true;
    };
    auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
	listener2->onContactBegin = [](PhysicsContact& contact) {
		auto scene = ThirdPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener1, this);
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	auto label1 = Label::createWithSystemFont("There is no boat transporting you forward,if you don't move", "MarketFelt", 32);
    label1->setColor(Color3B::BLACK);
    label1->setPosition(Point(480, 600));
    addChild(label1);

	schedule(schedule_selector(ThirdPass::update), 0.1f);
    
    return true;
}

void ThirdPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	pm1 = (pm1 + 1) % 75;
	if (pm1 == 0)
	{
		pmupbrick1->setVelocity(Vec2( -pmupbrick1->getVelocity().x, 0));
		pmdownbrick1->setVelocity(Vec2( -pmdownbrick1->getVelocity().x, 0));
	}

    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(ForthPass::createScene());
    }
}