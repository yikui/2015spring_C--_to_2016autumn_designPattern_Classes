#include "TwelfthPassScene.h"
#include "endbackground.h"

USING_NS_CC;

Scene* TwelfthPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));
    
    Layer* layer = TwelfthPass::create();
    scene->addChild(layer);
    return scene;
}

bool TwelfthPass::init()
{
    
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

	SceneBuilder *sbuild = new SceneBuilder();

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//brick_vector

	Sprite* up_brick1;
	sbuild->setBrick(up_brick1, "chapter12\\down_brick3.png", 100, visibleSize.height/2 + 26);
	sbuild->setBrickPhysics(up_brick1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick1);
	brick_vec.push_back(up_brick1);
	Sprite* down_brick1;
	sbuild->setBrick(down_brick1, "chapter12\\down_brick3.png", 100, visibleSize.height/2 - 26);
	sbuild->setBrickPhysics(down_brick1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick1);
	brick_vec.push_back(down_brick1);

	Sprite* up_brick2;
	sbuild->setBrick(up_brick2, "chapter12\\down_brick3.png", 100, visibleSize.height/2 + 26);
	sbuild->setBrickPhysics(up_brick2, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick2);
	brick_vec.push_back(up_brick2);
	Sprite* down_brick2;
	sbuild->setBrick(down_brick2, "chapter12\\down_brick3.png", 100, visibleSize.height/2 - 26);
	sbuild->setBrickPhysics(down_brick2, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick2);
	brick_vec.push_back(down_brick2);

	Sprite* up_brick3;
	sbuild->setBrick(up_brick3, "chapter12\\12up_brick3.png", 350, visibleSize.height/2 + 186);
	sbuild->setBrickPhysics(up_brick3, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick3);
	brick_vec.push_back(up_brick3);
	Sprite* down_brick3;
	sbuild->setBrick(down_brick3, "chapter12\\12down_brick3.png", 350, visibleSize.height/2 - 186);
	sbuild->setBrickPhysics(down_brick3, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick3);
	brick_vec.push_back(down_brick3);

	Sprite* up_brick4;
	sbuild->setBrick(up_brick4, "chapter12\\12up_brick4.png", 350, visibleSize.height/2 + 90);
	sbuild->setBrickPhysics(up_brick4, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick4);
	brick_vec.push_back(up_brick4);
	Sprite* down_brick4;
	sbuild->setBrick(down_brick4, "chapter12\\12down_brick4.png", 350, visibleSize.height/2 - 90);
	sbuild->setBrickPhysics(down_brick4, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick4);
	brick_vec.push_back(down_brick4);

	Sprite* up_brick5;
	sbuild->setBrick(up_brick5, "chapter12\\12up_brick5.png", 542, visibleSize.height/2 + 90);
	sbuild->setBrickPhysics(up_brick5, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick5);
	brick_vec.push_back(up_brick5);
	Sprite* down_brick5;
	sbuild->setBrick(down_brick5, "chapter12\\12down_brick3.png", 542, visibleSize.height/2 - 90);
	sbuild->setBrickPhysics(down_brick5, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick5);
	brick_vec.push_back(down_brick5);

	Sprite* up_brick6;
	sbuild->setBrick(up_brick6, "chapter12\\12up_brick6.png", 542, visibleSize.height/2 + 186);
	sbuild->setBrickPhysics(up_brick6, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick6);
	brick_vec.push_back(up_brick6);
	Sprite* down_brick6;
	sbuild->setBrick(down_brick6, "chapter12\\12down_brick4.png", 542, visibleSize.height/2 - 186);
	sbuild->setBrickPhysics(down_brick6, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick6);
	brick_vec.push_back(down_brick6);

	Sprite* up_brick7;
	sbuild->setBrick(up_brick7, "chapter12\\up_brick3.png", 730, visibleSize.height/2 + 26);
	sbuild->setBrickPhysics(up_brick7, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick7);
	brick_vec.push_back(up_brick7);
	Sprite* down_brick7;
	sbuild->setBrick(down_brick7, "chapter12\\down_brick3.png", 730, visibleSize.height/2 - 26);
	sbuild->setBrickPhysics(down_brick7, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick7);
	brick_vec.push_back(down_brick7);

	Sprite* up_brick8;
	sbuild->setBrick(up_brick8, "chapter12\\up_brick3.png", 762, visibleSize.height/2 + 70);
	sbuild->setBrickPhysics(up_brick8, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick8);
	brick_vec.push_back(up_brick8);
	Sprite* down_brick8;
	sbuild->setBrick(down_brick8, "chapter12\\down_brick3.png", 762, visibleSize.height/2 - 70);
	sbuild->setBrickPhysics(down_brick8, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick8);
	brick_vec.push_back(down_brick8);

	Sprite* up_brick9;
	sbuild->setBrick(up_brick9, "chapter12\\down_brick3.png", 730, visibleSize.height/2 + 120);
	sbuild->setBrickPhysics(up_brick9, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_brick9);
	brick_vec.push_back(up_brick9);
	Sprite* down_brick9;
	sbuild->setBrick(down_brick9, "chapter12\\down_brick3.png", 730, visibleSize.height/2 - 120);
	sbuild->setBrickPhysics(down_brick9, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_brick9);
	brick_vec.push_back(down_brick9);

	//thorn_vector

	Sprite* down_thorn;
	sbuild->setThorn(down_thorn, "chapter12\\down_thorn_move.png", 378.5, visibleSize.height/2 - 14);
	sbuild->setThornPhysics(down_thorn, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2);
	addChild(down_thorn);
	thorn_vec.push_back(down_thorn);

	//move_thorn_vector

	Sprite* down_thorn_move;
	sbuild->setMoveThorn(down_thorn_move, "chapter12\\down_thorn_move.png", 250.5, visibleSize.height/2 - 206);
	sbuild->setMoveThornPhysics(down_thorn_move, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2);
	addChild(down_thorn_move);
	moving_thorn_vec.push_back(down_thorn_move);
	down_thorn_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(5, Vec2(200, 0)), MoveBy::create(5, Vec2(-200, 0)), NULL)));

	Sprite* up_thorn1_move;
	sbuild->setMoveThorn(up_thorn1_move, "chapter12\\up_thorn_move.png", 580, visibleSize.height/2 + 110);
	sbuild->setMoveThornPhysics(up_thorn1_move, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2);
	addChild(up_thorn1_move);
	moving_thorn_vec.push_back(up_thorn1_move);
	up_thorn1_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(5, Vec2(60, 0)), MoveBy::create(5, Vec2(-60, 0)), NULL)));

	Sprite* down_thorn1_move;
	sbuild->setMoveThorn(down_thorn1_move, "chapter12\\down_thorn_move.png", 580, visibleSize.height/2 - 110);
	sbuild->setMoveThornPhysics(down_thorn1_move, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 2);
	addChild(down_thorn1_move);
	moving_thorn_vec.push_back(down_thorn1_move);
	down_thorn1_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(5, Vec2(60, 0)), MoveBy::create(5, Vec2(-60, 0)), NULL)));

	//move_brick_vector

	Sprite* up_brick1_move;
	sbuild->setMoveBrick(up_brick1_move, "chapter12\\up_brick_move.png", 100, visibleSize.height/2 + 100);
	sbuild->setMoveBrickPhysics(up_brick1_move, false, 1000000.0f, 0.4f, 0.0f, 20.0f, 0.0f, 1);
	addChild(up_brick1_move);
	moving_brick_vec.push_back(up_brick1_move);
	up_brick1_move_body = moving_brick_vec[0]->getPhysicsBody();
	Sprite* down_brick1_move;
	sbuild->setMoveBrick(down_brick1_move, "chapter12\\down_brick_move.png", 100, visibleSize.height/2 - 100);
	sbuild->setMoveBrickPhysics(down_brick1_move, false, 1000000.0f, 0.4f, 0.0f, 20.0f, 0.0f, 1);
	addChild(down_brick1_move);
	moving_brick_vec.push_back(down_brick1_move);
	down_brick1_move_body = moving_brick_vec[1]->getPhysicsBody();

	Sprite* up_brick2_move;
	sbuild->setMoveBrick(up_brick2_move, "chapter12\\up_brick_move.png", 250, visibleSize.height/2 + 120);
	sbuild->setMoveBrickPhysics(up_brick2_move, false, 1000000.0f, 0.4f, 0.0f, -20.0f, 0.0f, 1);
	addChild(up_brick2_move);
	moving_brick_vec.push_back(up_brick2_move);
	up_brick2_move_body = moving_brick_vec[2]->getPhysicsBody();
	Sprite* down_brick2_move;
	sbuild->setMoveBrick(down_brick2_move, "chapter12\\down_brick_move.png", 250, visibleSize.height/2 - 120);
	sbuild->setMoveBrickPhysics(down_brick2_move, false, 1000000.0f, 0.4f, 0.0f, -20.0f, 0.0f, 1);
	addChild(down_brick2_move);
	moving_brick_vec.push_back(down_brick2_move);
	down_brick2_move_body = moving_brick_vec[3]->getPhysicsBody();

    /*auto up_brick1_move = Sprite::create("chapter12\\up_brick_move.png");
    auto down_brick1_move = Sprite::create("chapter12\\down_brick_move.png");
    up_brick1_move->setPosition(Vec2(100, visibleSize.height/2 + 100));
    down_brick1_move->setPosition(Vec2(100, visibleSize.height/2 - 100));
    addChild(up_brick1_move);
    addChild(down_brick1_move);
    
    
    up_brick1_move_body = PhysicsBody::createBox(up_brick1_move->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    down_brick1_move_body = PhysicsBody::createBox(down_brick1_move->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    up_brick1_move_body->setContactTestBitmask(1);
    down_brick1_move_body->setContactTestBitmask(1);
    up_brick1_move_body->setGroup(1);
    down_brick1_move_body->setGroup(1);
    up_brick1_move_body->setVelocity(Vec2( 20, 0));
    down_brick1_move_body->setVelocity(Vec2( 20, 0));
    
    up_brick1_move->setPhysicsBody(up_brick1_move_body);
    down_brick1_move->setPhysicsBody(down_brick1_move_body);
    
    auto up_brick2_move = Sprite::create("chapter12\\up_brick_move.png");
    auto down_brick2_move = Sprite::create("chapter12\\down_brick_move.png");
    up_brick2_move->setPosition(Vec2(250, visibleSize.height/2 + 120));
    down_brick2_move->setPosition(Vec2(250, visibleSize.height/2 - 120));
    addChild(up_brick2_move);
    addChild(down_brick2_move);
    
    up_brick2_move_body = PhysicsBody::createBox(up_brick2_move->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    down_brick2_move_body = PhysicsBody::createBox(down_brick2_move->getContentSize(), PhysicsMaterial(1000000.0f, 0.4f, 0.0f));
    up_brick2_move_body->setContactTestBitmask(1);
    down_brick2_move_body->setContactTestBitmask(1);
    up_brick2_move_body->setGroup(3);
    down_brick2_move_body->setGroup(3);
    up_brick2_move_body->setVelocity(Vec2( -20, 0));
    down_brick2_move_body->setVelocity(Vec2( -20, 0));
    
    up_brick2_move->setPhysicsBody(up_brick2_move_body);
    down_brick2_move->setPhysicsBody(down_brick2_move_body);*/
    
    time1 = 0;
    
    auto listener1 = EventListenerPhysicsContactWithGroup::create(1);
    listener1->onContactPreSolve = [this](PhysicsContact& contact, PhysicsContactPreSolve& solve) {
        if (control1->body1()->getVelocity().x == 0)
        {
            control1->body1()->setVelocity(Vec2( up_brick1_move_body->getVelocity().x, control1->body1()->getVelocity().y));
            control1->body2()->setVelocity(Vec2( down_brick1_move_body->getVelocity().x, control1->body2()->getVelocity().y));
        }
    
        return true;
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener1, this);
    
    auto listener2 = EventListenerPhysicsContactWithGroup::create(3);
    listener2->onContactPreSolve = [this](PhysicsContact& contact, PhysicsContactPreSolve& solve) {
        if (control1->body1()->getVelocity().x == 0)
        {
            control1->body1()->setVelocity(Vec2( up_brick2_move_body->getVelocity().x, control1->body1()->getVelocity().y));
            control1->body2()->setVelocity(Vec2( down_brick2_move_body->getVelocity().x, control1->body2()->getVelocity().y));
        }
        
        return true;
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener2, this);
    
    schedule(schedule_selector(TwelfthPass::update), 0.1f);
    
    /*auto up_brick1 = Sprite::create("chapter12\\down_brick3.png");
    auto down_brick1 = Sprite::create("chapter12\\down_brick3.png");
    up_brick1->setPosition(Vec2(100, visibleSize.height/2 + 26));
    down_brick1->setPosition(Vec2(100, visibleSize.height/2 - 26));
    addChild(up_brick1);
    addChild(down_brick1);
    
    auto up_brick1_body = PhysicsBody::createEdgeBox(up_brick1->getContentSize());
    auto down_brick1_body = PhysicsBody::createEdgeBox(down_brick1->getContentSize());
    up_brick1_body->setContactTestBitmask(1);
    down_brick1_body->setContactTestBitmask(1);
    
    up_brick1->setPhysicsBody(up_brick1_body);
    down_brick1->setPhysicsBody(down_brick1_body);
    
    auto up_brick2 = Sprite::create("chapter12\\down_brick3.png");
    auto down_brick2 = Sprite::create("chapter12\\down_brick3.png");
    up_brick2->setPosition(Vec2(100, visibleSize.height/2 + 26));
    down_brick2->setPosition(Vec2(100, visibleSize.height/2 - 26));
    addChild(up_brick2);
    addChild(down_brick2);
    
    auto up_brick2_body = PhysicsBody::createEdgeBox(up_brick2->getContentSize());
    auto down_brick2_body = PhysicsBody::createEdgeBox(down_brick2->getContentSize());
    up_brick2_body->setContactTestBitmask(1);
    down_brick2_body->setContactTestBitmask(1);
    
    up_brick2->setPhysicsBody(up_brick2_body);
    down_brick2->setPhysicsBody(down_brick2_body);
    
    auto up_brick3 = Sprite::create("chapter12\\12up_brick3.png");
    auto down_brick3 = Sprite::create("chapter12\\12down_brick3.png");
    up_brick3->setPosition(Vec2(350, visibleSize.height/2 + 186));
    down_brick3->setPosition(Vec2(350, visibleSize.height/2 - 186));
    addChild(up_brick3);
    addChild(down_brick3);
    
    auto up_brick3_body = PhysicsBody::createEdgeBox(up_brick3->getContentSize());
    auto down_brick3_body = PhysicsBody::createEdgeBox(down_brick3->getContentSize());
    up_brick3_body->setContactTestBitmask(1);
    down_brick3_body->setContactTestBitmask(1);
    
    up_brick3->setPhysicsBody(up_brick3_body);
    down_brick3->setPhysicsBody(down_brick3_body);
    
    auto up_brick4 = Sprite::create("chapter12\\12up_brick4.png");
    auto down_brick4 = Sprite::create("chapter12\\12down_brick4.png");
    up_brick4->setPosition(Vec2(350, visibleSize.height/2 + 90));
    down_brick4->setPosition(Vec2(350, visibleSize.height/2 - 90));
    addChild(up_brick4);
    addChild(down_brick4);
    
    auto up_brick4_body = PhysicsBody::createEdgeBox(up_brick4->getContentSize());
    auto down_brick4_body = PhysicsBody::createEdgeBox(down_brick4->getContentSize());
    up_brick4_body->setContactTestBitmask(1);
    down_brick4_body->setContactTestBitmask(1);
    
    up_brick4->setPhysicsBody(up_brick4_body);
    down_brick4->setPhysicsBody(down_brick4_body);
    
    auto up_brick5 = Sprite::create("chapter12\\12up_brick5.png");
    auto down_brick5 = Sprite::create("chapter12\\12down_brick3.png");
    up_brick5->setPosition(Vec2(542, visibleSize.height/2 + 90));
    down_brick5->setPosition(Vec2(542, visibleSize.height/2 - 90));
    addChild(up_brick5);
    addChild(down_brick5);
    
    auto up_brick5_body = PhysicsBody::createEdgeBox(up_brick5->getContentSize());
    auto down_brick5_body = PhysicsBody::createEdgeBox(down_brick5->getContentSize());
    up_brick5_body->setContactTestBitmask(1);
    down_brick5_body->setContactTestBitmask(1);
    
    up_brick5->setPhysicsBody(up_brick5_body);
    down_brick5->setPhysicsBody(down_brick5_body);
    
    auto up_brick6 = Sprite::create("chapter12\\12up_brick6.png");
    auto down_brick6 = Sprite::create("chapter12\\12down_brick4.png");
    up_brick6->setPosition(Vec2(542, visibleSize.height/2 + 186));
    down_brick6->setPosition(Vec2(542, visibleSize.height/2 - 186));
    addChild(up_brick6);
    addChild(down_brick6);
    
    auto up_brick6_body = PhysicsBody::createEdgeBox(up_brick6->getContentSize());
    auto down_brick6_body = PhysicsBody::createEdgeBox(down_brick6->getContentSize());
    up_brick6_body->setContactTestBitmask(1);
    down_brick6_body->setContactTestBitmask(1);
    
    up_brick6->setPhysicsBody(up_brick6_body);
    down_brick6->setPhysicsBody(down_brick6_body);
    
    auto down_thorn = Sprite::create("chapter12\\down_thorn_move.png");
    down_thorn->setPosition(Vec2(378.5, visibleSize.height/2 - 14));
    addChild(down_thorn);
    
    auto down_thorn_body = PhysicsBody::createEdgeBox(down_thorn->getContentSize());
    down_thorn_body->setContactTestBitmask(1);
    down_thorn_body->setGroup(2);
    
    down_thorn->setPhysicsBody(down_thorn_body);
    
    auto down_thorn_move = Sprite::create("chapter12\\down_thorn_move.png");
    down_thorn_move->setPosition(Vec2(250.5, visibleSize.height/2 - 206));
    addChild(down_thorn_move);
    
    auto down_thorn_move_body = PhysicsBody::createEdgeBox(down_thorn_move->getContentSize());
    down_thorn_move_body->setContactTestBitmask(1);
    down_thorn_move_body->setGroup(2);
    
    down_thorn_move->setPhysicsBody(down_thorn_move_body);*/
    
    /*auto up_thorn1_move = Sprite::create("chapter12\\up_thorn_move.png");
    auto down_thorn1_move = Sprite::create("chapter12\\down_thorn_move.png");
    up_thorn1_move->setPosition(Vec2(580, visibleSize.height/2 + 110));
    down_thorn1_move->setPosition(Vec2(580, visibleSize.height/2 - 110));
    addChild(up_thorn1_move);
    addChild(down_thorn1_move);
    
    auto up_thorn1_move_body = PhysicsBody::createEdgeBox(up_thorn1_move->getContentSize());
    auto down_thorn1_move_body = PhysicsBody::createEdgeBox(down_thorn1_move->getContentSize());
    up_thorn1_move_body->setContactTestBitmask(1);
    down_thorn1_move_body->setContactTestBitmask(1);
    up_thorn1_move_body->setGroup(2);
    down_thorn1_move_body->setGroup(2);
    
    up_thorn1_move->setPhysicsBody(up_thorn1_move_body);
    down_thorn1_move->setPhysicsBody(down_thorn1_move_body);*/
    
    auto listener = EventListenerPhysicsContactWithGroup::create(2);
    listener->onContactBegin = [](PhysicsContact& contact) {
        Director::getInstance()->replaceScene(TwelfthPass::createScene());
        return true;
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    /*auto up_brick7 = Sprite::create("chapter12\\up_brick3.png");
    auto down_brick7 = Sprite::create("chapter12\\down_brick3.png");
    up_brick7->setPosition(Vec2(730, visibleSize.height/2 + 26));
    down_brick7->setPosition(Vec2(730, visibleSize.height/2 - 26));
    addChild(up_brick7);
    addChild(down_brick7);
    
    auto up_brick7_body = PhysicsBody::createEdgeBox(up_brick7->getContentSize());
    auto down_brick7_body = PhysicsBody::createEdgeBox(down_brick7->getContentSize());
    up_brick7_body->setContactTestBitmask(1);
    down_brick7_body->setContactTestBitmask(1);
    
    up_brick7->setPhysicsBody(up_brick7_body);
    down_brick7->setPhysicsBody(down_brick7_body);
    
    auto up_brick8 = Sprite::create("chapter12\\up_brick3.png");
    auto down_brick8 = Sprite::create("chapter12\\down_brick3.png");
    up_brick8->setPosition(Vec2(762, visibleSize.height/2 + 70));
    down_brick8->setPosition(Vec2(762, visibleSize.height/2 - 70));
    addChild(up_brick8);
    addChild(down_brick8);
    
    auto up_brick8_body = PhysicsBody::createEdgeBox(up_brick8->getContentSize());
    auto down_brick8_body = PhysicsBody::createEdgeBox(down_brick8->getContentSize());
    up_brick8_body->setContactTestBitmask(1);
    down_brick8_body->setContactTestBitmask(1);
    
    up_brick8->setPhysicsBody(up_brick8_body);
    down_brick8->setPhysicsBody(down_brick8_body);
    
    auto up_brick9 = Sprite::create("chapter12\\down_brick3.png");
    auto down_brick9 = Sprite::create("chapter12\\down_brick3.png");
    up_brick9->setPosition(Vec2(730, visibleSize.height/2 + 120));
    down_brick9->setPosition(Vec2(730, visibleSize.height/2 - 120));
    addChild(up_brick9);
    addChild(down_brick9);
    
    auto up_brick9_body = PhysicsBody::createEdgeBox(up_brick9->getContentSize());
    auto down_brick9_body = PhysicsBody::createEdgeBox(down_brick9->getContentSize());
    up_brick9_body->setContactTestBitmask(1);
    down_brick9_body->setContactTestBitmask(1);
    
    up_brick9->setPhysicsBody(up_brick9_body);
    down_brick9->setPhysicsBody(down_brick9_body);*/
    
    auto label = Label::createWithSystemFont("Darkness before dawn !", "Arial", 32);
    label->setColor(Color3B::BLACK);
    label->setPosition(Vec2(480, 600));
    addChild(label);
    
    return true;
}

void TwelfthPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    time1 = (time1 + 1) % 40;
    
    if (time1 == 0)
    {
        up_brick1_move_body->setVelocity(Vec2( -up_brick1_move_body->getVelocity().x, 0));
        down_brick1_move_body->setVelocity(Vec2( -down_brick1_move_body->getVelocity().x, 0));
        up_brick2_move_body->setVelocity(Vec2( -up_brick2_move_body->getVelocity().x, 0));
        down_brick2_move_body->setVelocity(Vec2( -down_brick2_move_body->getVelocity().x, 0));
        
    }
    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(EndBackground::createScene());
    }
}

