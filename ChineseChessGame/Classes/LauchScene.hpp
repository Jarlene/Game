//
//  LauchScene.hpp
//  ChineseChessGame
//
//  Created by 郑珊 on 15/12/26.
//
//

#ifndef LauchScene_hpp
#define LauchScene_hpp

#include <stdio.h>
#include "cocos2d.h"


class LauchScene : public cocos2d::Layer
{
public:
    
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    void backToMainScene(Ref* sender);
    
    CREATE_FUNC(LauchScene);
};

#endif /* LauchScene_hpp */
