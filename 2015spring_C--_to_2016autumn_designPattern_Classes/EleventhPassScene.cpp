#include "EleventhPassScene.h"

USING_NS_CC;

Scene* EleventhPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vect(0, 0));
    Layer* layer = EleventhPass::create();
    scene->addChild(layer);
    return scene;
}

bool EleventhPass::init()
{
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

    auto upplatform1 = Sprite::create("chapter11\\11upsquare1.png");
    upplatform1->setPosition(Vec2(185, 345));
    addChild(upplatform1);
    auto p_upplatform1 = PhysicsBody::createEdgeBox(upplatform1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform1->setContactTestBitmask(1);
    upplatform1->setPhysicsBody(p_upplatform1);
    auto downplatform1 = Sprite::create("chapter11\\11upsquare1.png");
    downplatform1->setPosition(Vec2(185, 295));
    addChild(downplatform1);
    auto p_downplatform1 = PhysicsBody::createEdgeBox(downplatform1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform1->setContactTestBitmask(1);
    downplatform1->setPhysicsBody(p_downplatform1);

    auto upplatform2 = Sprite::create("chapter11\\11upsquare3.png");
    upplatform2->setPosition(Vec2(215, 375));
    addChild(upplatform2);
    auto p_upplatform2 = PhysicsBody::createEdgeBox(upplatform2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform2->setContactTestBitmask(1);
    upplatform2->setPhysicsBody(p_upplatform2);
    auto downplatform2 = Sprite::create("chapter11\\11upsquare3.png");
    downplatform2->setPosition(Vec2(215, 265));
    addChild(downplatform2);
    auto p_downplatform2 = PhysicsBody::createEdgeBox(downplatform2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform2->setContactTestBitmask(1);
    downplatform2->setPhysicsBody(p_downplatform2);

    auto upplatform3 = Sprite::create("chapter11\\11upsquare1.png");
    upplatform3->setPosition(Vec2(775, 345));
    addChild(upplatform3);
    auto p_upplatform3 = PhysicsBody::createEdgeBox(upplatform3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform3->setContactTestBitmask(1);
    upplatform3->setPhysicsBody(p_upplatform3);
    auto downplatform3 = Sprite::create("chapter11\\11upsquare1.png");
    downplatform3->setPosition(Vec2(775, 295));
    addChild(downplatform3);
    auto p_downplatform3 = PhysicsBody::createEdgeBox(downplatform3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform3->setContactTestBitmask(1);
    downplatform3->setPhysicsBody(p_downplatform3);

    auto upplatform4 = Sprite::create("chapter11\\11upsquare3.png");
    upplatform4->setPosition(Vec2(745, 375));
    addChild(upplatform4);
    auto p_upplatform4 = PhysicsBody::createEdgeBox(upplatform4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upplatform4->setContactTestBitmask(1);
    upplatform4->setPhysicsBody(p_upplatform4);
    auto downplatform4 = Sprite::create("chapter11\\11upsquare3.png");
    downplatform4->setPosition(Vec2(745, 265));
    addChild(downplatform4);
    auto p_downplatform4 = PhysicsBody::createEdgeBox(downplatform4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downplatform4->setContactTestBitmask(1);
    downplatform4->setPhysicsBody(p_downplatform4);

    auto upbrick1 = Sprite::create("chapter11\\11downsquare2.png");
    upbrick1->setPosition(Vec2(270, 405));
    addChild(upbrick1);
    auto p_upbrick1 = PhysicsBody::createEdgeBox(upbrick1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick1->setContactTestBitmask(1);
    upbrick1->setPhysicsBody(p_upbrick1);
    auto downbrick1 = Sprite::create("chapter11\\11downsquare2.png");
    downbrick1->setPosition(Vec2(270, 235));
    addChild(downbrick1);
    auto p_downbrick1 = PhysicsBody::createEdgeBox(downbrick1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick1->setContactTestBitmask(1);
    downbrick1->setPhysicsBody(p_downbrick1);

    auto upbrick2 = Sprite::create("chapter11\\11upsquare1.png");
    upbrick2->setPosition(Vec2(315, 405));
    addChild(upbrick2);
    auto p_upbrick2 = PhysicsBody::createEdgeBox(upbrick2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick2->setContactTestBitmask(1);
    upbrick2->setPhysicsBody(p_upbrick2);
    auto downbrick2 = Sprite::create("chapter11\\11upsquare1.png");
    downbrick2->setPosition(Vec2(315, 235));
    addChild(downbrick2);
    auto p_downbrick2 = PhysicsBody::createEdgeBox(downbrick2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick2->setContactTestBitmask(1);
    downbrick2->setPhysicsBody(p_downbrick2);

    auto upbrickthorn1 = Sprite::create("chapter11\\11upthorn1.png");
    upbrickthorn1->setPosition(Vec2(315, 424));
    addChild(upbrickthorn1);
    auto p_upbrickthorn1 = PhysicsBody::createEdgeBox(upbrickthorn1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrickthorn1->setContactTestBitmask(1);
	p_upbrickthorn1->setGroup(2);
    upbrickthorn1->setPhysicsBody(p_upbrickthorn1);
    auto downbrickthorn1 = Sprite::create("chapter11\\11upthorn1.png");
    downbrickthorn1->setPosition(Vec2(315, 216));
    addChild(downbrickthorn1);
    auto p_downbrickthorn1 = PhysicsBody::createEdgeBox(downbrickthorn1->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrickthorn1->setContactTestBitmask(1);
	p_downbrickthorn1->setGroup(2);
    downbrickthorn1->setPhysicsBody(p_downbrickthorn1);

    auto upbrick3 = Sprite::create("chapter11\\11downsquare2.png");
    upbrick3->setPosition(Vec2(360, 405));
    addChild(upbrick3);
    auto p_upbrick3 = PhysicsBody::createEdgeBox(upbrick3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick3->setContactTestBitmask(1);
    upbrick3->setPhysicsBody(p_upbrick3);
    auto downbrick3 = Sprite::create("chapter11\\11downsquare2.png");
    downbrick3->setPosition(Vec2(360, 235));
    addChild(downbrick3);
    auto p_downbrick3 = PhysicsBody::createEdgeBox(downbrick3->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick3->setContactTestBitmask(1);
    downbrick3->setPhysicsBody(p_downbrick3);

    auto upbrick4 = Sprite::create("chapter11\\11upsquare2.png");
    upbrick4->setPosition(Vec2(430, 435));
    addChild(upbrick4);
    auto p_upbrick4 = PhysicsBody::createEdgeBox(upbrick4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick4->setContactTestBitmask(1);
    upbrick4->setPhysicsBody(p_upbrick4);
    auto downbrick4 = Sprite::create("chapter11\\11upsquare2.png");
    downbrick4->setPosition(Vec2(430, 205));
    addChild(downbrick4);
    auto p_downbrick4 = PhysicsBody::createEdgeBox(downbrick4->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick4->setContactTestBitmask(1);
    downbrick4->setPhysicsBody(p_downbrick4);

    auto upbrick5 = Sprite::create("chapter11\\11upsquare1.png");
    upbrick5->setPosition(Vec2(445, 465));
    addChild(upbrick5);
    auto p_upbrick5 = PhysicsBody::createEdgeBox(upbrick5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick5->setContactTestBitmask(1);
    upbrick5->setPhysicsBody(p_upbrick5);
    auto downbrick5 = Sprite::create("chapter11\\11upsquare1.png");
    downbrick5->setPosition(Vec2(445, 175));
    addChild(downbrick5);
    auto p_downbrick5 = PhysicsBody::createEdgeBox(downbrick5->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick5->setContactTestBitmask(1);
    downbrick5->setPhysicsBody(p_downbrick5);

    auto upbrick6 = Sprite::create("chapter11\\11downsquare2.png");
    upbrick6->setPosition(Vec2(490, 435));
    addChild(upbrick6);
    auto p_upbrick6 = PhysicsBody::createEdgeBox(upbrick6->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick6->setContactTestBitmask(1);
    upbrick6->setPhysicsBody(p_upbrick6);
    auto downbrick6 = Sprite::create("chapter11\\11downsquare2.png");
    downbrick6->setPosition(Vec2(490, 205));
    addChild(downbrick6);
    auto p_downbrick6 = PhysicsBody::createEdgeBox(downbrick6->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick6->setContactTestBitmask(1);
    downbrick6->setPhysicsBody(p_downbrick6);

    auto upbrick7 = Sprite::create("chapter11\\11downsquare1.png");
    upbrick7->setPosition(Vec2(475, 465));
    addChild(upbrick7);
    auto p_upbrick7 = PhysicsBody::createEdgeBox(upbrick7->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick7->setContactTestBitmask(1);
    upbrick7->setPhysicsBody(p_upbrick7);
    auto downbrick7 = Sprite::create("chapter11\\11downsquare1.png");
    downbrick7->setPosition(Vec2(475, 175));
    addChild(downbrick7);
    auto p_downbrick7 = PhysicsBody::createEdgeBox(downbrick7->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick7->setContactTestBitmask(1);
    downbrick7->setPhysicsBody(p_downbrick7);

    auto upbrick8 = Sprite::create("chapter11\\11upsquare2.png");
    upbrick8->setPosition(Vec2(570, 435));
    addChild(upbrick8);
    auto p_upbrick8 = PhysicsBody::createEdgeBox(upbrick8->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick8->setContactTestBitmask(1);
    upbrick8->setPhysicsBody(p_upbrick8);
    auto downbrick8 = Sprite::create("chapter11\\11upsquare2.png");
    downbrick8->setPosition(Vec2(570, 205));
    addChild(downbrick8);
    auto p_downbrick8 = PhysicsBody::createEdgeBox(downbrick8->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick8->setContactTestBitmask(1);
    downbrick8->setPhysicsBody(p_downbrick8);

    auto upbrick9 = Sprite::create("chapter11\\11upsquare1.png");
    upbrick9->setPosition(Vec2(615, 405));
    addChild(upbrick9);
    auto p_upbrick9 = PhysicsBody::createEdgeBox(upbrick9->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick9->setContactTestBitmask(1);
    upbrick9->setPhysicsBody(p_upbrick9);
    auto downbrick9 = Sprite::create("chapter11\\11upsquare1.png");
    downbrick9->setPosition(Vec2(615, 235));
    addChild(downbrick9);
    auto p_downbrick9 = PhysicsBody::createEdgeBox(downbrick9->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick9->setContactTestBitmask(1);
    downbrick9->setPhysicsBody(p_downbrick9);

    auto upbrick10 = Sprite::create("chapter11\\11downsquare1.png");
    upbrick10->setPosition(Vec2(645, 405));
    addChild(upbrick10);
    auto p_upbrick10 = PhysicsBody::createEdgeBox(upbrick10->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick10->setContactTestBitmask(1);
    upbrick10->setPhysicsBody(p_upbrick10);
    auto downbrick10 = Sprite::create("chapter11\\11downsquare1.png");
    downbrick10->setPosition(Vec2(645, 235));
    addChild(downbrick10);
    auto p_downbrick10 = PhysicsBody::createEdgeBox(downbrick10->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick10->setContactTestBitmask(1);
    downbrick10->setPhysicsBody(p_downbrick10);

    auto upbrickthorn2 = Sprite::create("chapter11\\11downthorn1.png");
    upbrickthorn2->setPosition(Vec2(645, 424));
    addChild(upbrickthorn2);
    auto p_upbrickthorn2 = PhysicsBody::createEdgeBox(upbrickthorn2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrickthorn2->setContactTestBitmask(1);
	p_upbrickthorn2->setGroup(2);
    upbrickthorn2->setPhysicsBody(p_upbrickthorn2);
    auto downbrickthorn2 = Sprite::create("chapter11\\11downthorn1.png");
    downbrickthorn2->setPosition(Vec2(645, 216));
    addChild(downbrickthorn2);
    auto p_downbrickthorn2 = PhysicsBody::createEdgeBox(downbrickthorn2->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrickthorn2->setContactTestBitmask(1);
	p_downbrickthorn2->setGroup(2);
    downbrickthorn2->setPhysicsBody(p_downbrickthorn2);

    auto upbrick11 = Sprite::create("chapter11\\11upsquare2.png");
    upbrick11->setPosition(Vec2(690, 405));
    addChild(upbrick11);
    auto p_upbrick11 = PhysicsBody::createEdgeBox(upbrick11->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_upbrick11->setContactTestBitmask(1);
    upbrick11->setPhysicsBody(p_upbrick11);
    auto downbrick11 = Sprite::create("chapter11\\11upsquare2.png");
    downbrick11->setPosition(Vec2(690, 235));
    addChild(downbrick11);
    auto p_downbrick11 = PhysicsBody::createEdgeBox(downbrick11->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 0.0f));
	p_downbrick11->setContactTestBitmask(1);
    downbrick11->setPhysicsBody(p_downbrick11);

	auto upthorn1 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn1);
	setthorn(242.5, 334, upthorn1);
	auto upthorn2 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn2);
	setthorn(292.5, 334, upthorn2);
	auto upthorn3 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn3);
	setthorn(342.5, 334, upthorn3);
	auto upthorn4 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn4);
	setthorn(392.5, 334, upthorn4);
	auto upthorn5 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn5);
	setthorn(442.5, 334, upthorn5);
	auto upthorn6 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn6);
	setthorn(492.5, 334, upthorn6);
	auto upthorn7 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn7);
	setthorn(542.5, 334, upthorn7);
	auto upthorn8 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn8);
	setthorn(592.5, 334, upthorn8);
	auto upthorn9 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn9);
	setthorn(642.5, 334, upthorn9);
	auto upthorn10 = Sprite::create("chapter11\\11upthorn1.png");
	addChild(upthorn10);
	setthorn(692.5, 334, upthorn10);

    auto listener2 = EventListenerPhysicsContactWithGroup::create(2);
	listener2->onContactBegin = [](PhysicsContact& contact) { 
		auto scene = EleventhPass::createScene();
		Director::getInstance()->replaceScene(scene);
		return true;
    };
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);

	auto label1 = Label::createWithSystemFont("I tell me I will not sink.", "MarketFelt", 32);
    label1->setColor(Color3B::BLACK);
    label1->setPosition(Point(480, 600));
    addChild(label1);

	schedule(schedule_selector(EleventhPass::update), 0.1f);
    
    return true;
}

void EleventhPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    if (role->getPositionX() >= visibleSize.width) {  
        Director::getInstance()->replaceScene(TwelfthPass::createScene());
    }
}

void EleventhPass::setthorn(int x, int y, Sprite *thorn)
{
    thorn->setPosition(Vec2(x, y));
    auto pthorn = PhysicsBody::createEdgeBox(thorn->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    pthorn->setContactTestBitmask(1);
    pthorn->setGroup(2);
    thorn->setPhysicsBody(pthorn);
}