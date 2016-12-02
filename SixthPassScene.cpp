#include "SixthPassScene.h"

USING_NS_CC;

Scene* SixthPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));
    
    Layer* layer = SixthPass::create();
    scene->addChild(layer);
    return scene;
}

bool SixthPass::init()
{
    
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

	SceneBuilder *sbuild = new SceneBuilder();
    
    schedule(schedule_selector(SixthPass::update), 0.1f);
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//brick_vector

	Sprite* up_brick1;
	sbuild->setBrick(up_brick1, "chapter6\\down_brick3.png", 150, visibleSize.height/2 + 90);
	sbuild->setBrickPhysics(up_brick1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick1);
	brick_vec.push_back(up_brick1);
	Sprite* down_brick1;
	sbuild->setBrick(down_brick1, "chapter6\\down_brick3.png", 150, visibleSize.height/2 - 90);
	sbuild->setBrickPhysics(down_brick1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick1);
	brick_vec.push_back(down_brick1);

	Sprite* up_brick2;
	sbuild->setBrick(up_brick2, "chapter6\\down_brick3.png", 210, visibleSize.height/2 + 30);
	sbuild->setBrickPhysics(up_brick2, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick2);
	brick_vec.push_back(up_brick2);
	Sprite* down_brick2;
	sbuild->setBrick(down_brick2, "chapter6\\down_brick3.png", 210, visibleSize.height/2 - 30);
	sbuild->setBrickPhysics(down_brick2, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick2);
	brick_vec.push_back(down_brick2);

	Sprite* up_platform1;
	sbuild->setBrick(up_platform1, "chapter6\\down_platform1.png", 284, visibleSize.height/2 + 90);
	sbuild->setBrickPhysics(up_platform1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_platform1);
	brick_vec.push_back(up_platform1);
	Sprite* down_platform1;
	sbuild->setBrick(down_platform1, "chapter6\\down_platform1.png", 284, visibleSize.height/2 - 90);
	sbuild->setBrickPhysics(down_platform1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_platform1);
	brick_vec.push_back(down_platform1);

	Sprite* up_brick3;
	sbuild->setBrick(up_brick3, "chapter6\\down_brick3.png", 348, visibleSize.height/2 + 30);
	sbuild->setBrickPhysics(up_brick3, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick3);
	brick_vec.push_back(up_brick3);
	Sprite* down_brick3;
	sbuild->setBrick(down_brick3, "chapter6\\down_brick3.png", 348, visibleSize.height/2 - 30);
	sbuild->setBrickPhysics(down_brick3, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick3);
	brick_vec.push_back(down_brick3);

	Sprite* up_brick4;
	sbuild->setBrick(up_brick4, "chapter6\\down_brick3.png", 348, visibleSize.height/2 + 66);
	sbuild->setBrickPhysics(up_brick4, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick4);
	brick_vec.push_back(up_brick4);
	Sprite* down_brick4;
	sbuild->setBrick(down_brick4, "chapter6\\down_brick3.png", 348, visibleSize.height/2 - 66);
	sbuild->setBrickPhysics(down_brick4, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick4);
	brick_vec.push_back(down_brick4);

	Sprite* up_brick5;
	sbuild->setBrick(up_brick5, "chapter6\\downbrick.png", 470, visibleSize.height/2 + 130);
	sbuild->setBrickPhysics(up_brick5, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick5);
	brick_vec.push_back(up_brick5);
	Sprite* down_brick5;
	sbuild->setBrick(down_brick5, "chapter6\\downbrick.png", 470, visibleSize.height/2 - 130);
	sbuild->setBrickPhysics(down_brick5, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick5);
	brick_vec.push_back(down_brick5);

	Sprite* up_brick6;
	sbuild->setBrick(up_brick6, "chapter6\\downbrick.png", 600, visibleSize.height/2 + 130);
	sbuild->setBrickPhysics(up_brick6, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick6);
	brick_vec.push_back(up_brick6);
	Sprite* down_brick6;
	sbuild->setBrick(down_brick6, "chapter6\\downbrick.png", 600, visibleSize.height/2 - 130);
	sbuild->setBrickPhysics(down_brick6, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick6);
	brick_vec.push_back(down_brick6);

	Sprite* up_brick7;
	sbuild->setBrick(up_brick7, "chapter6\\down_brick3.png", 700, visibleSize.height/2 + 150);
	sbuild->setBrickPhysics(up_brick7, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick7);
	brick_vec.push_back(up_brick7);
	Sprite* down_brick7;
	sbuild->setBrick(down_brick7, "chapter6\\down_brick3.png", 700, visibleSize.height/2 - 150);
	sbuild->setBrickPhysics(down_brick7, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick7);
	brick_vec.push_back(down_brick7);

	Sprite* up_brick8;
	sbuild->setBrick(up_brick8, "chapter6\\down_brick3.png", 750, visibleSize.height/2 + 70);
	sbuild->setBrickPhysics(up_brick8, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick8);
	brick_vec.push_back(up_brick8);
	Sprite* down_brick8;
	sbuild->setBrick(down_brick8, "chapter6\\down_brick3.png", 750, visibleSize.height/2 - 70);
	sbuild->setBrickPhysics(down_brick8, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick8);
	brick_vec.push_back(down_brick8);

	Sprite* up_brick9;
	sbuild->setBrick(up_brick9, "chapter6\\down_vertical_brick.png", 900, visibleSize.height/2 + 70);
	sbuild->setBrickPhysics(up_brick9, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick9);
	brick_vec.push_back(up_brick9);
	Sprite* down_brick9;
	sbuild->setBrick(down_brick9, "chapter6\\down_vertical_brick.png", 900, visibleSize.height/2 - 70);
	sbuild->setBrickPhysics(down_brick9, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick9);
	brick_vec.push_back(down_brick9);

	//move_thorn_vector

	Sprite* down_thorn_move;
	sbuild->setMoveThorn(down_thorn_move, "chapter6\\down_thorn_move.png", visibleSize.width/2 - 80, visibleSize.height/2 - 14);
	sbuild->setMoveThornPhysics(down_thorn_move, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2);
	addChild(down_thorn_move);
	moving_thorn_vec.push_back(down_thorn_move);
	down_thorn_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(1, Vec2(450, 0)), MoveBy::create(1, Vec2(-450, 0)), NULL)));
    
    /*auto up_brick1 = Sprite::create("chapter6\\down_brick3.png");
    auto down_brick1 = Sprite::create("chapter6\\down_brick3.png");
    up_brick1->setPosition(Vec2(150, visibleSize.height/2 + 90));
    down_brick1->setPosition(Vec2(150, visibleSize.height/2 - 90));
    addChild(up_brick1);
    addChild(down_brick1);
    
    auto up_brick1_body = PhysicsBody::createEdgeBox(up_brick1->getContentSize());
    auto down_brick1_body = PhysicsBody::createEdgeBox(down_brick1->getContentSize());
    up_brick1_body->setContactTestBitmask(1);
    down_brick1_body->setContactTestBitmask(1);
    
    up_brick1->setPhysicsBody(up_brick1_body);
    down_brick1->setPhysicsBody(down_brick1_body);
    
    auto up_brick2 = Sprite::create("chapter6\\down_brick3.png");
    auto down_brick2 = Sprite::create("chapter6\\down_brick3.png");
    up_brick2->setPosition(Vec2(210, visibleSize.height/2 + 30));
    down_brick2->setPosition(Vec2(210, visibleSize.height/2 - 30));
    addChild(up_brick2);
    addChild(down_brick2);
    
    auto up_brick2_body = PhysicsBody::createEdgeBox(up_brick2->getContentSize());
    auto down_brick2_body = PhysicsBody::createEdgeBox(down_brick2->getContentSize());
    up_brick2_body->setContactTestBitmask(1);
    down_brick2_body->setContactTestBitmask(1);
    
    up_brick2->setPhysicsBody(up_brick2_body);
    down_brick2->setPhysicsBody(down_brick2_body);
    
    auto up_platform1 = Sprite::create("chapter6\\down_platform1.png");
    auto down_platform1 = Sprite::create("chapter6\\down_platform1.png");
    up_platform1->setPosition(Vec2(284, visibleSize.height/2 + 90));
    down_platform1->setPosition(Vec2(284, visibleSize.height/2 - 90));
    addChild(up_platform1);
    addChild(down_platform1);
    
    auto up_platform1_body = PhysicsBody::createEdgeBox(up_platform1->getContentSize());
    auto down_platform1_body = PhysicsBody::createEdgeBox(down_platform1->getContentSize());
    up_platform1_body->setContactTestBitmask(1);
    down_platform1_body->setContactTestBitmask(1);
    
    up_platform1->setPhysicsBody(up_platform1_body);
    down_platform1->setPhysicsBody(down_platform1_body);
    
    auto up_brick3 = Sprite::create("chapter6\\down_brick3.png");
    auto down_brick3 = Sprite::create("chapter6\\down_brick3.png");
    up_brick3->setPosition(Vec2(348, visibleSize.height/2 + 30));
    down_brick3->setPosition(Vec2(348, visibleSize.height/2 - 30));
    addChild(up_brick3);
    addChild(down_brick3);
    
    auto up_brick3_body = PhysicsBody::createEdgeBox(up_brick3->getContentSize());
    auto down_brick3_body = PhysicsBody::createEdgeBox(down_brick3->getContentSize());
    up_brick3_body->setContactTestBitmask(1);
    down_brick3_body->setContactTestBitmask(1);
    
    up_brick3->setPhysicsBody(up_brick3_body);
    down_brick3->setPhysicsBody(down_brick3_body);
    
    auto up_brick4 = Sprite::create("chapter6\\down_brick3.png");
    auto down_brick4 = Sprite::create("chapter6\\down_brick3.png");
    up_brick4->setPosition(Vec2(348, visibleSize.height/2 + 66));
    down_brick4->setPosition(Vec2(348, visibleSize.height/2 - 66));
    addChild(up_brick4);
    addChild(down_brick4);
    
    auto up_brick4_body = PhysicsBody::createEdgeBox(up_brick4->getContentSize());
    auto down_brick4_body = PhysicsBody::createEdgeBox(down_brick4->getContentSize());
    up_brick4_body->setContactTestBitmask(1);
    down_brick4_body->setContactTestBitmask(1);
    
    up_brick4->setPhysicsBody(up_brick4_body);
    down_brick4->setPhysicsBody(down_brick4_body);
    
    auto up_brick5 = Sprite::create("chapter6\\downbrick.png");
    auto down_brick5 = Sprite::create("chapter6\\downbrick.png");
    up_brick5->setPosition(Vec2(470, visibleSize.height/2 + 130));
    down_brick5->setPosition(Vec2(470, visibleSize.height/2 - 130));
    addChild(up_brick5);
    addChild(down_brick5);
    
    auto up_brick5_body = PhysicsBody::createEdgeBox(up_brick5->getContentSize());
    auto down_brick5_body = PhysicsBody::createEdgeBox(down_brick5->getContentSize());
    up_brick5_body->setContactTestBitmask(1);
    down_brick5_body->setContactTestBitmask(1);
    
    up_brick5->setPhysicsBody(up_brick5_body);
    down_brick5->setPhysicsBody(down_brick5_body);
    
    auto up_brick6 = Sprite::create("chapter6\\downbrick.png");
    auto down_brick6 = Sprite::create("chapter6\\downbrick.png");
    up_brick6->setPosition(Vec2(600, visibleSize.height/2 + 130));
    down_brick6->setPosition(Vec2(600, visibleSize.height/2 - 130));
    addChild(up_brick6);
    addChild(down_brick6);
    
    auto up_brick6_body = PhysicsBody::createEdgeBox(up_brick6->getContentSize());
    auto down_brick6_body = PhysicsBody::createEdgeBox(down_brick6->getContentSize());
    up_brick6_body->setContactTestBitmask(1);
    down_brick6_body->setContactTestBitmask(1);
    
    up_brick6->setPhysicsBody(up_brick6_body);
    down_brick6->setPhysicsBody(down_brick6_body);
    
    auto up_brick7 = Sprite::create("chapter6\\down_brick3.png");
    auto down_brick7 = Sprite::create("chapter6\\down_brick3.png");
    up_brick7->setPosition(Vec2(700, visibleSize.height/2 + 150));
    down_brick7->setPosition(Vec2(700, visibleSize.height/2 - 150));
    addChild(up_brick7);
    addChild(down_brick7);
    
    auto up_brick7_body = PhysicsBody::createEdgeBox(up_brick7->getContentSize());
    auto down_brick7_body = PhysicsBody::createEdgeBox(down_brick7->getContentSize());
    up_brick7_body->setContactTestBitmask(1);
    down_brick7_body->setContactTestBitmask(1);
    
    up_brick7->setPhysicsBody(up_brick7_body);
    down_brick7->setPhysicsBody(down_brick7_body);
    
    auto up_brick8 = Sprite::create("chapter6\\down_brick3.png");
    auto down_brick8 = Sprite::create("chapter6\\down_brick3.png");
    up_brick8->setPosition(Vec2(750, visibleSize.height/2 + 70));
    down_brick8->setPosition(Vec2(750, visibleSize.height/2 - 70));
    addChild(up_brick8);
    addChild(down_brick8);
    
    auto up_brick8_body = PhysicsBody::createEdgeBox(up_brick8->getContentSize());
    auto down_brick8_body = PhysicsBody::createEdgeBox(down_brick8->getContentSize());
    up_brick8_body->setContactTestBitmask(1);
    down_brick8_body->setContactTestBitmask(1);
    
    up_brick8->setPhysicsBody(up_brick8_body);
    down_brick8->setPhysicsBody(down_brick8_body);
    
    auto up_brick9 = Sprite::create("chapter6\\down_vertical_brick.png");
    auto down_brick9 = Sprite::create("chapter6\\down_vertical_brick.png");
    up_brick9->setPosition(Vec2(900, visibleSize.height/2 + 70));
    down_brick9->setPosition(Vec2(900, visibleSize.height/2 - 70));
    addChild(up_brick9);
    addChild(down_brick9);
    
    auto up_brick9_body = PhysicsBody::createEdgeBox(up_brick9->getContentSize());
    auto down_brick9_body = PhysicsBody::createEdgeBox(down_brick9->getContentSize());
    up_brick9_body->setContactTestBitmask(1);
    down_brick9_body->setContactTestBitmask(1);
    
    up_brick9->setPhysicsBody(up_brick9_body);
    down_brick9->setPhysicsBody(down_brick9_body);
    
    auto down_thorn_move = Sprite::create("chapter6\\down_thorn_move.png");
    down_thorn_move->setPosition(Vec2(visibleSize.width/2 - 80, visibleSize.height/2 - 14));
    addChild(down_thorn_move);
    
    auto down_thorn_move_body = PhysicsBody::createEdgeBox(down_thorn_move->getContentSize());
    down_thorn_move_body->setContactTestBitmask(1);
    down_thorn_move_body->setGroup(2);
    
    down_thorn_move->setPhysicsBody(down_thorn_move_body);
    
    down_thorn_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(1, Vec2(450, 0)), MoveBy::create(1, Vec2(-450, 0)), NULL)));*/
    
    auto label = Label::createWithSystemFont("Life is rough !", "Arial", 32);
    label->setColor(Color3B::BLACK);
    label->setPosition(Vec2(480, 600));
    addChild(label);
    
    return true;
}

void SixthPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto listener = EventListenerPhysicsContactWithGroup::create(2);
    listener->onContactBegin = [](PhysicsContact& contact) {
        Director::getInstance()->replaceScene(SixthPass::createScene());
        return true;
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(SeventhPass::createScene());
    }
    
}