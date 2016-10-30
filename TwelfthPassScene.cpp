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

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto up_brick1_move = Sprite::create("chapter12\\up_brick_move.png");
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
    down_brick2_move->setPhysicsBody(down_brick2_move_body);
    
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
    
    auto up_brick1 = Sprite::create("chapter12\\down_brick3.png");
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
    
    down_thorn_move->setPhysicsBody(down_thorn_move_body);
    
    down_thorn_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(5, Vec2(200, 0)), MoveBy::create(5, Vec2(-200, 0)), NULL)));
    
    auto up_thorn1_move = Sprite::create("chapter12\\up_thorn_move.png");
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
    down_thorn1_move->setPhysicsBody(down_thorn1_move_body);
    
    up_thorn1_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(5, Vec2(60, 0)), MoveBy::create(5, Vec2(-60, 0)), NULL)));
    down_thorn1_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(5, Vec2(60, 0)), MoveBy::create(5, Vec2(-60, 0)), NULL)));
    
    auto listener = EventListenerPhysicsContactWithGroup::create(2);
    listener->onContactBegin = [](PhysicsContact& contact) {
        Director::getInstance()->replaceScene(TwelfthPass::createScene());
        return true;
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    auto up_brick7 = Sprite::create("chapter12\\up_brick3.png");
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
    down_brick9->setPhysicsBody(down_brick9_body);
    
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

