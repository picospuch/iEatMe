//
//  puch.cc
//  eatMe
//
//  Created by spuch on 11/28/14.
//
//

#include "cocos2d.h"
#include "puch.hh"

USING_NS_CC;

Probe probe;

void responseToEvent(int i, Event *event) {
    work();
}

int work() {
    auto director = Director::getInstance();
    auto scene = director->getRunningScene();
    auto size = Director::getInstance()->getWinSize();
    auto ac3d = Ripple3D::create(10, Size(32,24), Vec2(size.width/2,size.height/2), 240, 4, 160);
    NodeGrid* ng = (NodeGrid*)probe.a;
    ng->runAction(ac3d);
    printf("yes");
    return 0;
}
