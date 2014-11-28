//
//  puch.h
//  eatMe
//
//  Created by spuch on 11/28/14.
//
//

#ifndef __eatMe__puch__
#define __eatMe__puch__

#include <stdio.h>
#include "CCEvent.h"

USING_NS_CC;

struct Probe {
    void* a;
};

extern Probe probe;

void responseToEvent(int i, Event *event);
int work();


#endif /* defined(__eatMe__puch__) */
