#include "TenthPassScene.h"

USING_NS_CC;

Scene* TenthPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vect(0, 0));
    Layer* layer = TenthPass::create();
    scene->addChild(layer);
    return scene;
}

bool TenthPass::init()
{
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

	SceneBuilder *sbuild = new SceneBuilder();

	//brick_vector

	Sprite* upplatform1;
	sbuild->setBrick(upplatform1, "chapter10\\10upsquare1.png", 105, 345);
	sbuild->setBrickPhysics(upplatform1, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upplatform1);
	brick_vec.push_back(upplatform1);
	Sprite* downplatform1;
	sbuild->setBrick(downplatform1, "chapter10\\10upsquare1.png", 105, 295);
	sbuild->setBrickPhysics(downplatform1, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downplatform1);
	brick_vec.push_back(downplatform1);

	Sprite* upplatform2;
	sbuild->setBrick(upplatform2, "chapter10\\10upsquare2.png", 135, 375);
	sbuild->setBrickPhysics(upplatform2, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upplatform2);
	brick_vec.push_back(upplatform2);
	Sprite* downplatform2;
	sbuild->setBrick(downplatform2, "chapter10\\10upsquare2.png", 135, 265);
	sbuild->setBrickPhysics(downplatform2, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downplatform2);
	brick_vec.push_back(downplatform2);

	Sprite* upplatform3;
	sbuild->setBrick(upplatform3, "chapter10\\10upsquare3.png", 165, 405);
	sbuild->setBrickPhysics(upplatform3, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upplatform3);
	brick_vec.push_back(upplatform3);
	Sprite* downplatform3;
	sbuild->setBrick(downplatform3, "chapter10\\10upsquare3.png", 165, 235);
	sbuild->setBrickPhysics(downplatform3, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downplatform3);
	brick_vec.push_back(downplatform3);

	Sprite* upplatform4;
	sbuild->setBrick(upplatform4, "chapter10\\10downsquare1.png", 865, 345);
	sbuild->setBrickPhysics(upplatform4, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upplatform4);
	brick_vec.push_back(upplatform4);
	Sprite* downplatform4;
	sbuild->setBrick(downplatform4, "chapter10\\10downsquare1.png", 865, 295);
	sbuild->setBrickPhysics(downplatform4, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downplatform4);
	brick_vec.push_back(downplatform4);

	Sprite* upplatform5;
	sbuild->setBrick(upplatform5, "chapter10\\10downsquare2.png", 835, 375);
	sbuild->setBrickPhysics(upplatform5, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upplatform5);
	brick_vec.push_back(upplatform5);
	Sprite* downplatform5;
	sbuild->setBrick(downplatform5, "chapter10\\10downsquare2.png", 835, 265);
	sbuild->setBrickPhysics(downplatform5, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downplatform5);
	brick_vec.push_back(downplatform5);

	Sprite* upplatform6;
	sbuild->setBrick(upplatform6, "chapter10\\10downsquare3.png", 805, 405);
	sbuild->setBrickPhysics(upplatform6, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upplatform6);
	brick_vec.push_back(upplatform6);
	Sprite* downplatform6;
	sbuild->setBrick(downplatform6, "chapter10\\10downsquare3.png", 805, 235);
	sbuild->setBrickPhysics(downplatform6, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downplatform6);
	brick_vec.push_back(downplatform6);

	Sprite* upbrick1;
	sbuild->setBrick(upbrick1, "chapter10\\10upsquare1.png", 265, 405);
	sbuild->setBrickPhysics(upbrick1, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upbrick1);
	brick_vec.push_back(upbrick1);
	Sprite* downbrick1;
	sbuild->setBrick(downbrick1, "chapter10\\10upsquare1.png", 265, 235);
	sbuild->setBrickPhysics(downbrick1, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downbrick1);
	brick_vec.push_back(downbrick1);

	Sprite* upbrick2;
	sbuild->setBrick(upbrick2, "chapter10\\10downsquare2.png", 365, 405);
	sbuild->setBrickPhysics(upbrick2, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upbrick2);
	brick_vec.push_back(upbrick2);
	Sprite* downbrick2;
	sbuild->setBrick(downbrick2, "chapter10\\10downsquare2.png", 365, 235);
	sbuild->setBrickPhysics(downbrick2, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downbrick2);
	brick_vec.push_back(downbrick2);

	Sprite* upbrick3;
	sbuild->setBrick(upbrick3, "chapter10\\10upsquare4.png", 480, 405);
	sbuild->setBrickPhysics(upbrick3, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upbrick3);
	brick_vec.push_back(upbrick3);
	Sprite* downbrick3;
	sbuild->setBrick(downbrick3, "chapter10\\10downsquare4.png", 480, 235);
	sbuild->setBrickPhysics(downbrick3, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downbrick3);
	brick_vec.push_back(downbrick3);

	Sprite* upbrick4;
	sbuild->setBrick(upbrick4, "chapter10\\10upsquare2.png", 595, 405);
	sbuild->setBrickPhysics(upbrick4, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upbrick4);
	brick_vec.push_back(upbrick4);
	Sprite* downbrick4;
	sbuild->setBrick(downbrick4, "chapter10\\10upsquare2.png", 595, 235);
	sbuild->setBrickPhysics(downbrick4, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downbrick4);
	brick_vec.push_back(downbrick4);

	Sprite* upbrick5;
	sbuild->setBrick(upbrick5, "chapter10\\10downsquare1.png", 695, 405);
	sbuild->setBrickPhysics(upbrick5, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(upbrick5);
	brick_vec.push_back(upbrick5);
	Sprite* downbrick5;
	sbuild->setBrick(downbrick5, "chapter10\\10downsquare1.png", 695, 235);
	sbuild->setBrickPhysics(downbrick5, true, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 6);
	addChild(downbrick5);
	brick_vec.push_back(downbrick5);

	//thorn_vector

	Sprite* upthorn1;
	sbuild->setThorn(upthorn1, "chapter10\\10upthorn1.png", 480, 334);
	sbuild->setThornPhysics(upthorn1, true, 1.0f, 0.4f, 0.0f, 0.0f, 0.0f, 2);
	addChild(upthorn1);
	thorn_vec.push_back(upthorn1);
	Sprite* downthorn1;
	sbuild->setThorn(downthorn1, "chapter10\\10downthorn1.png", 480, 306);
	sbuild->setThornPhysics(downthorn1, true, 1.0f, 0.4f, 0.0f, 0.0f, 0.0f, 2);
	addChild(downthorn1);
	thorn_vec.push_back(downthorn1);

    /*auto upplatform1 = Sprite::create("chapter10\\10upsquare1.png");
    upplatform1->setPosition(Vec2(105, 345));
    addChild(upplatform1);
    auto p_upplatform1 = PhysicsBody::createEdgeBox(upplatform1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform1->setContactTestBitmask(1);
    upplatform1->setPhysicsBody(p_upplatform1);
    auto downplatform1 = Sprite::create("chapter10\\10upsquare1.png");
    downplatform1->setPosition(Vec2(105, 295));
    addChild(downplatform1);
    auto p_downplatform1 = PhysicsBody::createEdgeBox(downplatform1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform1->setContactTestBitmask(1);
    downplatform1->setPhysicsBody(p_downplatform1);

    auto upplatform2 = Sprite::create("chapter10\\10upsquare2.png");
    upplatform2->setPosition(Vec2(135, 375));
    addChild(upplatform2);
    auto p_upplatform2 = PhysicsBody::createEdgeBox(upplatform2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform2->setContactTestBitmask(1);
    upplatform2->setPhysicsBody(p_upplatform2);
    auto downplatform2 = Sprite::create("chapter10\\10upsquare2.png");
    downplatform2->setPosition(Vec2(135, 265));
    addChild(downplatform2);
    auto p_downplatform2 = PhysicsBody::createEdgeBox(downplatform2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform2->setContactTestBitmask(1);
    downplatform2->setPhysicsBody(p_downplatform2);

    auto upplatform3 = Sprite::create("chapter10\\10upsquare3.png");
    upplatform3->setPosition(Vec2(165, 405));
    addChild(upplatform3);
    auto p_upplatform3 = PhysicsBody::createEdgeBox(upplatform3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform3->setContactTestBitmask(1);
    upplatform3->setPhysicsBody(p_upplatform3);
    auto downplatform3 = Sprite::create("chapter10\\10upsquare3.png");
    downplatform3->setPosition(Vec2(165, 235));
    addChild(downplatform3);
    auto p_downplatform3 = PhysicsBody::createEdgeBox(downplatform3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform3->setContactTestBitmask(1);
    downplatform3->setPhysicsBody(p_downplatform3);

    auto upplatform4 = Sprite::create("chapter10\\10downsquare1.png");
    upplatform4->setPosition(Vec2(865, 345));
    addChild(upplatform4);
    auto p_upplatform4 = PhysicsBody::createEdgeBox(upplatform4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform4->setContactTestBitmask(1);
    upplatform4->setPhysicsBody(p_upplatform4);
    auto downplatform4 = Sprite::create("chapter10\\10downsquare1.png");
    downplatform4->setPosition(Vec2(865, 295));
    addChild(downplatform4);
    auto p_downplatform4 = PhysicsBody::createEdgeBox(downplatform4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform4->setContactTestBitmask(1);
    downplatform4->setPhysicsBody(p_downplatform4);

    auto upplatform5 = Sprite::create("chapter10\\10downsquare2.png");
    upplatform5->setPosition(Vec2(835, 375));
    addChild(upplatform5);
    auto p_upplatform5 = PhysicsBody::createEdgeBox(upplatform5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform5->setContactTestBitmask(1);
    upplatform5->setPhysicsBody(p_upplatform5);
    auto downplatform5 = Sprite::create("chapter10\\10downsquare2.png");
    downplatform5->setPosition(Vec2(835, 265));
    addChild(downplatform5);
    auto p_downplatform5 = PhysicsBody::createEdgeBox(downplatform5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform5->setContactTestBitmask(1);
    downplatform5->setPhysicsBody(p_downplatform5);

    auto upplatform6 = Sprite::create("chapter10\\10downsquare3.png");
    upplatform6->setPosition(Vec2(805, 405));
    addChild(upplatform6);
    auto p_upplatform6 = PhysicsBody::createEdgeBox(upplatform6->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform6->setContactTestBitmask(1);
    upplatform6->setPhysicsBody(p_upplatform6);
    auto downplatform6 = Sprite::create("chapter10\\10downsquare3.png");
    downplatform6->setPosition(Vec2(805, 235));
    addChild(downplatform6);
    auto p_downplatform6 = PhysicsBody::createEdgeBox(downplatform6->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform6->setContactTestBitmask(1);
    downplatform6->setPhysicsBody(p_downplatform6);

    auto upbrick1 = Sprite::create("chapter10\\10upsquare1.png");
    upbrick1->setPosition(Vec2(265, 405));
    addChild(upbrick1);
    auto p_upbrick1 = PhysicsBody::createEdgeBox(upbrick1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick1->setContactTestBitmask(1);
    upbrick1->setPhysicsBody(p_upbrick1);
    auto downbrick1 = Sprite::create("chapter10\\10upsquare1.png");
    downbrick1->setPosition(Vec2(265, 235));
    addChild(downbrick1);
    auto p_downbrick1 = PhysicsBody::createEdgeBox(downbrick1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick1->setContactTestBitmask(1);
    downbrick1->setPhysicsBody(p_downbrick1);

    auto upbrick2 = Sprite::create("chapter10\\10downsquare2.png");
    upbrick2->setPosition(Vec2(365, 405));
    addChild(upbrick2);
    auto p_upbrick2 = PhysicsBody::createEdgeBox(upbrick2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick2->setContactTestBitmask(1);
    upbrick2->setPhysicsBody(p_upbrick2);
    auto downbrick2 = Sprite::create("chapter10\\10downsquare2.png");
    downbrick2->setPosition(Vec2(365, 235));
    addChild(downbrick2);
    auto p_downbrick2 = PhysicsBody::createEdgeBox(downbrick2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick2->setContactTestBitmask(1);
    downbrick2->setPhysicsBody(p_downbrick2);

    auto upbrick3 = Sprite::create("chapter10\\10upsquare4.png");
    upbrick3->setPosition(Vec2(480, 405));
    addChild(upbrick3);
    auto p_upbrick3 = PhysicsBody::createEdgeBox(upbrick3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick3->setContactTestBitmask(1);
    upbrick3->setPhysicsBody(p_upbrick3);
    auto downbrick3 = Sprite::create("chapter10\\10downsquare4.png");
    downbrick3->setPosition(Vec2(480, 235));
    addChild(downbrick3);
    auto p_downbrick3 = PhysicsBody::createEdgeBox(downbrick3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick3->setContactTestBitmask(1);
    downbrick3->setPhysicsBody(p_downbrick3);

    auto upbrick4 = Sprite::create("chapter10\\10upsquare2.png");
    upbrick4->setPosition(Vec2(595, 405));
    addChild(upbrick4);
    auto p_upbrick4 = PhysicsBody::createEdgeBox(upbrick4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick4->setContactTestBitmask(1);
    upbrick4->setPhysicsBody(p_upbrick4);
    auto downbrick4 = Sprite::create("chapter10\\10upsquare2.png");
    downbrick4->setPosition(Vec2(595, 235));
    addChild(downbrick4);
    auto p_downbrick4 = PhysicsBody::createEdgeBox(downbrick4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick4->setContactTestBitmask(1);
    downbrick4->setPhysicsBody(p_downbrick4);

    auto upbrick5 = Sprite::create("chapter10\\10downsquare1.png");
    upbrick5->setPosition(Vec2(695, 405));
    addChild(upbrick5);
    auto p_upbrick5 = PhysicsBody::createEdgeBox(upbrick5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick5->setContactTestBitmask(1);
    upbrick5->setPhysicsBody(p_upbrick5);
    auto downbrick5 = Sprite::create("chapter10\\10downsquare1.png");
    downbrick5->setPosition(Vec2(695, 235));
    addChild(downbrick5);
    auto p_downbrick5 = PhysicsBody::createEdgeBox(downbrick5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick5->setContactTestBitmask(1);
    downbrick5->setPhysicsBody(p_downbrick5);

	auto upthorn1 = Sprite::create("chapter10\\10upthorn1.png");
    upthorn1->setPosition(Vec2(480, 334));
    addChild(upthorn1);
    auto pupthorn1 = PhysicsBody::createEdgeBox(upthorn1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pupthorn1->setContactTestBitmask(1);
    pupthorn1->setGroup(2);
    upthorn1->setPhysicsBody(pupthorn1);
	auto downthorn1 = Sprite::create("chapter10\\10downthorn1.png");    
    downthorn1->setPosition(Vec2(480, 306));
    addChild(downthorn1);
    auto pdownthornp1 = PhysicsBody::createEdgeBox(downthorn1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pdownthornp1->setContactTestBitmask(1);
    pdownthornp1->setGroup(2);
    downthorn1->setPhysicsBody(pdownthornp1);*/

    auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
	listener2->onContactBegin = [](PhysicsContact& contact) {
		auto scene = TenthPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	auto label1 = Label::createWithSystemFont("Sometimes you should change your sight continuously.", "MarketFelt", 32);
    label1->setColor(Color3B::BLACK);
    label1->setPosition(Point(480, 600));
    addChild(label1);

	schedule(schedule_selector(TenthPass::update), 0.1f);
    
    return true;
}

void TenthPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(EleventhPass::createScene());
    }
}