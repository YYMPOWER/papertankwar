#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
    //gameExitCallBack
    void gameEndCallBack(cocos2d::Ref* pSender);
    
    //转到开始游戏的场景
    void gameStartCallBack(cocos2d::Ref* pSender);
};

#endif // __HELLOWORLD_SCENE_H__
