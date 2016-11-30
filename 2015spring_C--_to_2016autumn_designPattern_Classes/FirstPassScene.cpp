#include "FirstPassScene.h"

USING_NS_CC;

Scene* FirstPass::createScene()
{
    Scene* scene = Scene::createWithPhysics();
    scene->getPhysicsWorld()->setGravity(Vect(0, 0));
    Layer* layer = FirstPass::create();
    scene->addChild(layer);
    return scene;
}

bool FirstPass::init()
{
    if ( !GameBackground::init() ) {
        return false;
    }
    
    baseWork();

	auto label1 = Label::createWithSystemFont("This is a mirror world.", "MarketFelt", 32);
    label1->setColor(Color3B::BLACK);
    label1->setPosition(Point(480, 600));
    addChild(label1);

	schedule(schedule_selector(FirstPass::update), 0.1f);
    
    return true;
}

void FirstPass::update(float dt)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    if (role->getPositionX() >= visibleSize.width) {
        Director::getInstance()->replaceScene(SecondPass::createScene());
    }
}