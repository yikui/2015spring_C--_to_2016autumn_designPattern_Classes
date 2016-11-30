#include "SecondPassScene.h"

USING_NS_CC;

Scene* SecondPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, -0));
    Layer* layer = SecondPass::create();
    scene->addChild(layer);
    return scene;
}

bool SecondPass::init()
{
    

    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

	SceneBuilder *sbuild = new SceneBuilder();
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//brick_vector

	Sprite* upplatform1;
	sbuild->setBrick(upplatform1, "chapter2\\2upplatform1.png", 124, 360);
	sbuild->setBrickPhysics(upplatform1, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upplatform1);
	brick_vec.push_back(upplatform1);
	Sprite* downplatform1;
	sbuild->setBrick(downplatform1, "chapter2\\2downplatform1.png", 124, 280);
	sbuild->setBrickPhysics(downplatform1, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downplatform1);
	brick_vec.push_back(downplatform1);

	Sprite* upplatform2;
	sbuild->setBrick(upplatform2, "chapter2\\2upplatform1.png", 372, 360);
	sbuild->setBrickPhysics(upplatform2, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upplatform2);
	brick_vec.push_back(upplatform2);
	Sprite* downplatform2;
	sbuild->setBrick(downplatform2, "chapter2\\2downplatform1.png", 372, 280);
	sbuild->setBrickPhysics(downplatform2, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downplatform2);
	brick_vec.push_back(downplatform2);

	Sprite* upplatform3;
	sbuild->setBrick(upplatform3, "chapter2\\2upplatform2.png", 420, 390);
	sbuild->setBrickPhysics(upplatform3, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upplatform3);
	brick_vec.push_back(upplatform3);
	Sprite* downplatform3;
	sbuild->setBrick(downplatform3, "chapter2\\2downplatform2.png", 420, 250);
	sbuild->setBrickPhysics(downplatform3, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downplatform3);
	brick_vec.push_back(downplatform3);

	Sprite* upplatform4;
	sbuild->setBrick(upplatform4, "chapter2\\2upplatform1.png", 668, 360);
	sbuild->setBrickPhysics(upplatform4, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upplatform4);
	brick_vec.push_back(upplatform4);
	Sprite* downplatform4;
	sbuild->setBrick(downplatform4, "chapter2\\2downplatform1.png", 668, 280);
	sbuild->setBrickPhysics(downplatform4, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downplatform4);
	brick_vec.push_back(downplatform4);

	Sprite* upplatform5;
	sbuild->setBrick(upplatform5, "chapter2\\2upplatform2.png", 716, 390);
	sbuild->setBrickPhysics(upplatform5, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upplatform5);
	brick_vec.push_back(upplatform5);
	Sprite* downplatform5;
	sbuild->setBrick(downplatform5, "chapter2\\2downplatform2.png", 716, 250);
	sbuild->setBrickPhysics(downplatform5, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downplatform5);
	brick_vec.push_back(downplatform5);

	Sprite* upplatform6;
	sbuild->setBrick(upplatform6, "chapter2\\2upplatform3.png", 764, 420);
	sbuild->setBrickPhysics(upplatform6, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upplatform6);
	brick_vec.push_back(upplatform6);
	Sprite* downplatform6;
	sbuild->setBrick(downplatform6, "chapter2\\2downplatform3.png", 764, 220);
	sbuild->setBrickPhysics(downplatform6, true, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downplatform6);
	brick_vec.push_back(downplatform6);

	//thorn_vector

	Sprite* upthorn1;
	sbuild->setThorn(upthorn1, "chapter2\\2upthorn1.png", 152, 360);
	sbuild->setThornPhysics(upthorn1, true, 1.0f, 0.4f, 1.0f, 0.0f, 0.0f, 2);
	addChild(upthorn1);
	thorn_vec.push_back(upthorn1);
	Sprite* downthorn1;
	sbuild->setThorn(downthorn1, "chapter2\\2downthorn1.png", 152, 280);
	sbuild->setThornPhysics(downthorn1, true, 1.0f, 0.4f, 1.0f, 0.0f, 0.0f, 2);
	addChild(downthorn1);
	thorn_vec.push_back(downthorn1);

	Sprite* upthorn2;
	sbuild->setThorn(upthorn2, "chapter2\\2upthorn2.png", 448, 390);
	sbuild->setThornPhysics(upthorn2, true, 1.0f, 0.4f, 1.0f, 0.0f, 0.0f, 2);
	addChild(upthorn2);
	thorn_vec.push_back(upthorn2);
	Sprite* downthorn2;
	sbuild->setThorn(downthorn2, "chapter2\\2downthorn2.png", 448, 250);
	sbuild->setThornPhysics(downthorn2, true, 1.0f, 0.4f, 1.0f, 0.0f, 0.0f, 2);
	addChild(downthorn2);
	thorn_vec.push_back(downthorn2);

	Sprite* upthorn3;
	sbuild->setThorn(upthorn3, "chapter2\\2upthorn3.png", 792, 420);
	sbuild->setThornPhysics(upthorn3, true, 1.0f, 0.4f, 1.0f, 0.0f, 0.0f, 2);
	addChild(upthorn3);
	thorn_vec.push_back(upthorn3);
	Sprite* downthorn3;
	sbuild->setThorn(downthorn3, "chapter2\\2downthorn3.png", 792, 220);
	sbuild->setThornPhysics(downthorn3, true, 1.0f, 0.4f, 1.0f, 0.0f, 0.0f, 2);
	addChild(downthorn3);
	thorn_vec.push_back(downthorn3);

    /*auto upplatform1 = Sprite::create("chapter2\\2upplatform1.png");
    upplatform1->setPosition(Vec2(124, 360));
    addChild(upplatform1);
    auto p_upplatform1 = PhysicsBody::createEdgeBox(upplatform1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform1->setContactTestBitmask(1);
    upplatform1->setPhysicsBody(p_upplatform1);
    auto downplatform1 = Sprite::create("chapter2\\2downplatform1.png");
    downplatform1->setPosition(Vec2(124, 280));
    addChild(downplatform1);
    auto p_downplatform1 = PhysicsBody::createEdgeBox(downplatform1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform1->setContactTestBitmask(1);
    downplatform1->setPhysicsBody(p_downplatform1);

	auto upthorn1 = Sprite::create("chapter2\\2upthorn1.png");    
    upthorn1->setPosition(Vec2(152, 360));
    addChild(upthorn1);
	auto pupthorn1 = PhysicsBody::createEdgeBox(Size(8, 50), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupthorn1->setContactTestBitmask(1);
    pupthorn1->setGroup(2);
    upthorn1->setPhysicsBody(pupthorn1);
	auto downthorn1 = Sprite::create("chapter2\\2downthorn1.png");    
    downthorn1->setPosition(Vec2(152, 280));
    addChild(downthorn1);
    auto pdownthornp1 = PhysicsBody::createEdgeBox(Size(8, 50), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pdownthornp1->setContactTestBitmask(1);
    pdownthornp1->setGroup(2);
    downthorn1->setPhysicsBody(pdownthornp1);



    auto upplatform2 = Sprite::create("chapter2\\2upplatform1.png");
    upplatform2->setPosition(Vec2(372, 360));
    addChild(upplatform2);
    auto p_upplatform2 = PhysicsBody::createEdgeBox(upplatform2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform2->setContactTestBitmask(1);
    upplatform2->setPhysicsBody(p_upplatform2);
    auto downplatform2 = Sprite::create("chapter2\\2downplatform1.png");
    downplatform2->setPosition(Vec2(372, 280));
    addChild(downplatform2);
    auto p_downplatform2 = PhysicsBody::createEdgeBox(downplatform2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform2->setContactTestBitmask(1);
    downplatform2->setPhysicsBody(p_downplatform2);

    auto upplatform3 = Sprite::create("chapter2\\2upplatform2.png");
    upplatform3->setPosition(Vec2(420, 390));
    addChild(upplatform3);
    auto p_upplatform3 = PhysicsBody::createEdgeBox(upplatform3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform3->setContactTestBitmask(1);
    upplatform3->setPhysicsBody(p_upplatform3);
    auto downplatform3 = Sprite::create("chapter2\\2downplatform2.png");
    downplatform3->setPosition(Vec2(420, 250));
    addChild(downplatform3);
    auto p_downplatform3 = PhysicsBody::createEdgeBox(downplatform3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform3->setContactTestBitmask(1);
    downplatform3->setPhysicsBody(p_downplatform3);

	auto upthorn2 = Sprite::create("chapter2\\2upthorn2.png");    
    upthorn2->setPosition(Vec2(448, 390));
    addChild(upthorn2);
    auto pupthorn2 = PhysicsBody::createEdgeBox(Size(8, 110), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupthorn2->setContactTestBitmask(1);
    pupthorn2->setGroup(2);
    upthorn2->setPhysicsBody(pupthorn2);
	auto downthorn2 = Sprite::create("chapter2\\2downthorn2.png");    
    downthorn2->setPosition(Vec2(448, 250));
    addChild(downthorn2);
    auto pdownthornp2 = PhysicsBody::createEdgeBox(Size(8, 110), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pdownthornp2->setContactTestBitmask(1);
    pdownthornp2->setGroup(2);
    downthorn2->setPhysicsBody(pdownthornp2);



    auto upplatform4 = Sprite::create("chapter2\\2upplatform1.png");
    upplatform4->setPosition(Vec2(668, 360));
    addChild(upplatform4);
    auto p_upplatform4 = PhysicsBody::createEdgeBox(upplatform4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform4->setContactTestBitmask(1);
    upplatform4->setPhysicsBody(p_upplatform4);
    auto downplatform4 = Sprite::create("chapter2\\2downplatform1.png");
    downplatform4->setPosition(Vec2(668, 280));
    addChild(downplatform4);
    auto p_downplatform4 = PhysicsBody::createEdgeBox(downplatform4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform4->setContactTestBitmask(1);
    downplatform4->setPhysicsBody(p_downplatform4);

    auto upplatform5 = Sprite::create("chapter2\\2upplatform2.png");
    upplatform5->setPosition(Vec2(716, 390));
    addChild(upplatform5);
    auto p_upplatform5 = PhysicsBody::createEdgeBox(upplatform5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform5->setContactTestBitmask(1);
    upplatform5->setPhysicsBody(p_upplatform5);
    auto downplatform5 = Sprite::create("chapter2\\2downplatform2.png");
    downplatform5->setPosition(Vec2(716, 250));
    addChild(downplatform5);
    auto p_downplatform5 = PhysicsBody::createEdgeBox(downplatform5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform5->setContactTestBitmask(1);
    downplatform5->setPhysicsBody(p_downplatform5);

    auto upplatform6 = Sprite::create("chapter2\\2upplatform3.png");
    upplatform6->setPosition(Vec2(764, 420));
    addChild(upplatform6);
    auto p_upplatform6 = PhysicsBody::createEdgeBox(upplatform6->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform6->setContactTestBitmask(1);
    upplatform6->setPhysicsBody(p_upplatform6);
    auto downplatform6 = Sprite::create("chapter2\\2downplatform3.png");
    downplatform6->setPosition(Vec2(764, 220));
    addChild(downplatform6);
    auto p_downplatform6 = PhysicsBody::createEdgeBox(downplatform6->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform6->setContactTestBitmask(1);
    downplatform6->setPhysicsBody(p_downplatform6);

	auto upthorn3 = Sprite::create("chapter2\\2upthorn3.png");    
    upthorn3->setPosition(Vec2(792, 420));
    addChild(upthorn3);
    auto pupthorn3 = PhysicsBody::createEdgeBox(Size(8, 150), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupthorn3->setContactTestBitmask(1);
    pupthorn3->setGroup(2);
    upthorn3->setPhysicsBody(pupthorn3);
	auto downthorn3 = Sprite::create("chapter2\\2downthorn3.png");    
    downthorn3->setPosition(Vec2(792, 220));
    addChild(downthorn3);
    auto pdownthornp3 = PhysicsBody::createEdgeBox(Size(8, 150), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pdownthornp3->setContactTestBitmask(1);
    pdownthornp3->setGroup(2);
    downthorn3->setPhysicsBody(pdownthornp3);*/



    auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
	listener2->onContactBegin = [](PhysicsContact& contact) {
		auto scene = SecondPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	auto label1 = Label::createWithSystemFont("There are barries and threats in the ordinary world.", "MarketFelt", 32);
    label1->setColor(Color3B::BLACK);
    label1->setPosition(Point(480, 600));
    addChild(label1);

	schedule(schedule_selector(SecondPass::update), 0.1f);

    return true;
}

void SecondPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(ThirdPass::createScene());
    }
}