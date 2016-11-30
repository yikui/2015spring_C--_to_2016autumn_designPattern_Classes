#include "ChooseChapterScene.h"
#include "FirstPassScene.h"
#include "SeventhPassScene.h"

USING_NS_CC;

Scene* ChooseChapter::createScene()
{
    auto scene = Scene::create();
    auto layer = ChooseChapter::create();
    scene->addChild(layer);
    return scene;
}

bool ChooseChapter::init()
{
    if ( !Layer::init() ) {
        return  false;
    }
        
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto back_sprite = Sprite::create("chapter\\chapterbackground.png");
    back_sprite->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    addChild(back_sprite);
    
    auto gamemenuitem = MenuItemImage::create("gamemenubutton0.png",
                                              "gamemenubutton.png",
                                              [](Ref* r){
                                                  Director::getInstance()->popScene();
                                              });
    
    gamemenuitem->setPosition(Vec2(origin.x + 120, origin.y + 40));


    auto chapter1 = MenuItemImage::create("chapter\\chapter1.png",
                                          "chapter\\chapter1-.png",
                                          [](Ref* r){
                                              auto scene = FirstPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter1->setPosition(Vec2(210, 360));

    auto chapter2 = MenuItemImage::create("chapter\\chapter2.png",
                                          "chapter\\chapter2-.png",
                                          [](Ref* r){
                                              auto scene = SecondPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter2->setPosition(Vec2(390, 360));

    auto chapter3 = MenuItemImage::create("chapter\\chapter3.png",
                                          "chapter\\chapter3-.png",
                                          [](Ref* r){
                                              auto scene = ThirdPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter3->setPosition(Vec2(570, 360));
    
    auto chapter4 = MenuItemImage::create("chapter\\chapter4.png",
                                          "chapter\\chapter4-.png",
                                          [](Ref* r){
                                              auto scene = ForthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter4->setPosition(Vec2(750, 360));
    
    auto chapter5 = MenuItemImage::create("chapter\\chapter5.png",
                                          "chapter\\chapter5-.png",
                                          [](Ref* r){
                                              auto scene = FifthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter5->setPosition(Vec2(210, 240));
    
    auto chapter6 = MenuItemImage::create("chapter\\chapter6.png",
                                          "chapter\\chapter6-.png",
                                          [](Ref* r){
                                              auto scene = SixthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter6->setPosition(Vec2(390, 240));
    
    auto chapter7 = MenuItemImage::create("chapter\\chapter7.png",
                                          "chapter\\chapter7-.png",
                                          [](Ref* r){
                                              auto scene = SeventhPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter7->setPosition(Vec2(570, 240));
    
    auto chapter8 = MenuItemImage::create("chapter\\chapter8.png",
                                          "chapter\\chapter8-.png",
                                          [](Ref* r){
                                              auto scene = EighthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter8->setPosition(Vec2(750, 240));

    auto chapter9 = MenuItemImage::create("chapter\\chapter9.png",
                                          "chapter\\chapter9-.png",
                                          [](Ref* r){
                                              auto scene = NinthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter9->setPosition(Vec2(210, 120));

    auto chapter10 = MenuItemImage::create("chapter\\chapter10.png",
                                          "chapter\\chapter10-.png",
                                          [](Ref* r){
                                              auto scene = TenthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter10->setPosition(Vec2(390, 120));

    auto chapter11 = MenuItemImage::create("chapter\\chapter11.png",
                                          "chapter\\chapter11-.png",
                                          [](Ref* r){
                                              auto scene = EleventhPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter11->setPosition(Vec2(570, 120));

    auto chapter12 = MenuItemImage::create("chapter\\chapter12.png",
                                          "chapter\\chapter12-.png",
                                          [](Ref* r){
                                              auto scene = TwelfthPass::createScene();
                                              Director::getInstance()->replaceScene(scene);
                                          });
    
    chapter12->setPosition(Vec2(750, 120));

	auto chapter = Menu::create(gamemenuitem, chapter1, chapter2, chapter3, chapter4, chapter5, chapter6, chapter7, chapter8, chapter9, chapter10, chapter11, chapter12, NULL);
    chapter->setPosition(Point::ZERO);
    this->addChild(chapter);

	auto label1 = Label::createWithSystemFont("You can get into any door", "MarketFelt", 40);
	auto label2 = Label::createWithSystemFont("but you'd better experience all cherish memory", "MarketFelt", 40);
    label1->setColor(Color3B::BLACK);
    label1->setPosition(Point(480, 490));
    addChild(label1);
	label2->setColor(Color3B::BLACK);
    label2->setPosition(Point(480, 430));
    addChild(label2);

    return true;  
}