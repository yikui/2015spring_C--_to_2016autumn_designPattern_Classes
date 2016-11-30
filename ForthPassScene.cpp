#include "ForthPassScene.h"

Scene* ForthPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vec2(0, 0));
    
    Layer* layer = ForthPass::create();
    scene->addChild(layer);
    return scene;
}

bool ForthPass::init()
{
    
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

	SceneBuilder *sbuild = new SceneBuilder();
    
    scheduleUpdate();
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	//brick_vector

	Sprite* upvertical1;
	sbuild->setBrick(upvertical1, "chapter4\\up_vertical_brick.png", 200, visibleSize.height/2 + 40);
	sbuild->setBrickPhysics(upvertical1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(upvertical1);
	brick_vec.push_back(upvertical1);
	Sprite* downvertical1;
	sbuild->setBrick(downvertical1, "chapter4\\up_vertical_brick.png", 200, visibleSize.height/2 - 40);
	sbuild->setBrickPhysics(downvertical1, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(downvertical1);
	brick_vec.push_back(downvertical1);

	Sprite* up_platform;
	sbuild->setBrick(up_platform, "chapter4\\4down_platform1.png", visibleSize.width/2, visibleSize.height/2 + 40);
	sbuild->setBrickPhysics(up_platform, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(up_platform);
	brick_vec.push_back(up_platform);
	Sprite* down_platform;
	sbuild->setBrick(down_platform, "chapter4\\4down_platform1.png", visibleSize.width/2, visibleSize.height/2 - 40);
	sbuild->setBrickPhysics(down_platform, true, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 6);
	addChild(down_platform);
	brick_vec.push_back(down_platform);
	
	//thorn_vector

	Sprite* up_thorn;
	sbuild->setThorn(up_thorn, "chapter4\\4up_thorn.png", visibleSize.width/2, visibleSize.height/2 + 14);
	addChild(up_thorn);
	thorn_vec.push_back(up_thorn);
	Sprite* down_thorn;
	sbuild->setThorn(down_thorn, "chapter4\\4up_thorn.png", visibleSize.width/2, visibleSize.height/2 - 14);
	addChild(down_thorn);
	thorn_vec.push_back(down_thorn);
    
    /*auto upvertical1 = Sprite::create("chapter4\\up_vertical_brick.png");
    auto downvertical1 = Sprite::create("chapter4\\up_vertical_brick.png");
    upvertical1->setPosition(Vec2(200, visibleSize.height/2 + 40));
    downvertical1->setPosition(Vec2(200, visibleSize.height/2 - 40));
    addChild(upvertical1);
    addChild(downvertical1);
    
    auto up_brick_body1 = PhysicsBody::createEdgeBox(upvertical1->getContentSize());
    auto down_beick_body1 = PhysicsBody::createEdgeBox(downvertical1->getContentSize());
    
    upvertical1->setPhysicsBody(up_brick_body1);
    downvertical1->setPhysicsBody(down_beick_body1);
    
    auto up_platform = Sprite::create("chapter4\\4down_platform1.png");
    auto down_platform = Sprite::create("chapter4\\4down_platform1.png");
    up_platform->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2 + 40));
    down_platform->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2 - 40));
    addChild(up_platform);
    addChild(down_platform);
    
    auto up_platform_body = PhysicsBody::createEdgeBox(up_platform->getContentSize());
    auto down_platform_body = PhysicsBody::createEdgeBox(down_platform->getContentSize());
    up_platform_body->setContactTestBitmask(1);
    down_platform_body->setContactTestBitmask(1);
    
    up_platform->setPhysicsBody(up_platform_body);
    down_platform->setPhysicsBody(down_platform_body);
    
    auto up_thorn = Sprite::create("chapter4\\4up_thorn.png");
    auto down_thorn = Sprite::create("chapter4\\4down_thorn.png");
    up_thorn->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2 + 14));
    down_thorn->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2 - 14));
    addChild(up_thorn);
    addChild(down_thorn);*/
    
    auto label = Label::createWithSystemFont("Why is this a mirror world ?", "Market Felt.ttf", 32);
    label->setColor(Color3B::BLACK);
    label->setPosition(Vec2(480, 600));
    addChild(label);
    
    return true;
}

void ForthPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(FifthPass::createScene());
    }
    
}