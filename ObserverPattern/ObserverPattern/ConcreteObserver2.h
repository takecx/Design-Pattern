//
//  ConcreteObserver2.h
//  ObserverPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef ConcreteObserver2_h
#define ConcreteObserver2_h

#include <iostream>
#include "Observer.h"

class ConcreteObserver2
: public Observer
{
public:
    void Update();
    
private:
};

#endif /* ConcreteObserver2_h */
