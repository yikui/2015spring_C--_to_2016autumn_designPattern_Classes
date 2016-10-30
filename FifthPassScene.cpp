#include "FifthPassScene.h"

USING_NS_CC;

Scene* FifthPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));
    
    Layer* layer = FifthPass::create();
    scene->addChild(layer);
    return scene;
}

bool FifthPass::init()
{
    
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();
    
//    scheduleUpdate();
    schedule(schedule_selector(FifthPass::update), 0.1f);
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto up_brick1 = Sprite::create("chapter5\\downbrick.png");
    auto down_brick1 = Sprite::create("chapter5\\downbrick.png");
    up_brick1->setPosition(Vec2(180, visibleSize.height/2 + 40));
    down_brick1->setPosition(Vec2(180, visibleSize.height/2 - 40));
    addChild(up_brick1);
    addChild(down_brick1);
    
    auto up_brick1_body = PhysicsBody::createEdgeBox(up_brick1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    auto down_brick1_body = PhysicsBody::createEdgeBox(down_brick1->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    up_brick1_body->setContactTestBitmask(1);
    down_brick1_body->setContactTestBitmask(1);
    
    up_brick1->setPhysicsBody(up_brick1_body);
    down_brick1->setPhysicsBody(down_brick1_body);
    
    auto up_brick2 = Sprite::create("chapter5\\up_brick2.png");
    auto down_brick2 = Sprite::create("chapter5\\down_brick2.png");
    up_brick2->setPosition(Vec2(276, visibleSize.height/2 + 50));
    down_brick2->setPosition(Vec2(276, visibleSize.height/2 - 50));
    addChild(up_brick2);
    addChild(down_brick2);
    
    auto up_brick2_body = PhysicsBody::createEdgeBox(up_brick2->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    auto down_brick2_body = PhysicsBody::createEdgeBox(down_brick2->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    up_brick1_body->setContactTestBitmask(1);
    down_brick2_body->setContactTestBitmask(1);
    
    up_brick2->setPhysicsBody(up_brick2_body);
    down_brick2->setPhysicsBody(down_brick2_body);
    
    auto up_brick3 = Sprite::create("chapter5\\down_brick3.png");
    auto down_brick3 = Sprite::create("chapter5\\down_brick3.png");
    up_brick3->setPosition(Vec2(300, visibleSize.height/2 + 120));
    down_brick3->setPosition(Vec2(300, visibleSize.height/2 - 120));
    addChild(up_brick3);
    addChild(down_brick3);
    
    auto up_brick3_body = PhysicsBody::createEdgeBox(up_brick3->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    auto down_brick3_body = PhysicsBody::createEdgeBox(down_brick3->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    up_brick3_body->setContactTestBitmask(1);
    down_brick3_body->setContactTestBitmask(1);
    
    up_brick3->setPhysicsBody(up_brick3_body);
    down_brick3->setPhysicsBody(down_brick3_body);
    
    auto up_brick4 = Sprite::create("chapter5\\up_brick4.png");
    auto down_brick4 = Sprite::create("chapter5\\down_brick4.png");
    up_brick4->setPosition(Vec2(376, visibleSize.height/2 + 90));
    down_brick4->setPosition(Vec2(376, visibleSize.height/2 - 90));
    addChild(up_brick4);
    addChild(down_brick4);
    
    auto up_brick4_body = PhysicsBody::createEdgeBox(up_brick4->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    auto down_brick4_body = PhysicsBody::createEdgeBox(down_brick4->getContentSize(), PhysicsMaterial(1.0f, 0.4f, 0.0f));
    up_brick4_body->setContactTestBitmask(1);
    down_brick4_body->setContactTestBitmask(1);
    
    up_brick4->setPhysicsBody(up_brick4_body);
    down_brick4->setPhysicsBody(down_brick4_body);
    
    auto up_thorn = Sprite::create("chapter5\\4up_thorn.png");
    auto down_thorn = Sprite::create("chapter5\\4down_thorn.png");
    up_thorn->setPosition(Vec2(566, visibleSize.height/2 + 14));
    down_thorn->setPosition(Vec2(566, visibleSize.height/2 - 14));
    addChild(up_thorn);
    addChild(down_thorn);
    
    auto up_thorn_body = PhysicsBody::createEdgeBox(up_thorn->getContentSize());
    auto down_thorn_body = PhysicsBody::createEdgeBox(down_thorn->getContentSize());
    up_thorn_body->setContactTestBitmask(1);
    down_thorn_body->setContactTestBitmask(1);
    up_thorn_body->setGroup(2);
    down_thorn_body->setGroup(2);
    
    up_thorn->setPhysicsBody(up_thorn_body);
    down_thorn->setPhysicsBody(down_thorn_body);
    
    auto up_brick5 = Sprite::create("chapter5\\downbrick.png");
    auto down_brick5 = Sprite::create("chapter5\\downbrick.png");
    up_brick5->setPosition(Vec2(566, visibleSize.height/2 + 100));
    down_brick5->setPosition(Vec2(566, visibleSize.height/2 - 100));
    addChild(up_brick5);
    addChild(down_brick5);
    
    auto up_brick5_body = PhysicsBody::createEdgeBox(up_brick5->getContentSize());
    auto down_brick5_body = PhysicsBody::createEdgeBox(down_brick5->getContentSize());
    up_brick5_body->setContactTestBitmask(1);
    down_brick5_body->setContactTestBitmask(1);
    
    up_brick5->setPhysicsBody(up_brick5_body);
    down_brick5->setPhysicsBody(down_brick5_body);
    
    auto down_thorn_move = Sprite::create("chapter5\\down_thorn_move.png");
    down_thorn_move->setPosition(Vec2(320, visibleSize.height/2 - 94));
    addChild(down_thorn_move);
    
    auto down_thorn_move_body = PhysicsBody::createEdgeBox(down_thorn_move->getContentSize());
    down_thorn_move_body->setContactTestBitmask(1);
    down_thorn_move_body->setGroup(2);
    
    down_thorn_move->setPhysicsBody(down_thorn_move_body);
    
    down_thorn_move->runAction(RepeatForever::create(Sequence::create(MoveBy::create(1, Vec2(-80, 0)), MoveBy::create(1, Vec2(80, 0)), NULL)));
    
    auto listener = EventListenerPhysicsContactWithGroup::create(2);
    listener->onContactBegin = [](PhysicsContact& contact) {
        Director::getInstance()->replaceScene(FifthPass::createScene());
        return true;
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    auto label = Label::createWithSystemFont("Sometimes the truth is not what you think should be right", "Arial", 32);
    label->setColor(Color3B::BLACK);
    label->setPosition(Vec2(480, 600));
    addChild(label);
    
    return true;
}

void FifthPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(SixthPass::createScene());
    }
}