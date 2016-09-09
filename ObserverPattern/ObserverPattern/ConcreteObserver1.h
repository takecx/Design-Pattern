//
//  ConcreteObserver1.h
//  ObserverPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef ConcreteObserver1_h
#define ConcreteObserver1_h

#include <iostream>
#include "Observer.h"

class ConcreteObserver1
: public Observer
{
public:
    void Update();
    
private:
};

#endif /* ConcreteObserver1_h */
