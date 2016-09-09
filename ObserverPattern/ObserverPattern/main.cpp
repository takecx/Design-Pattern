//
//  main.cpp
//  ObserverPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#include <iostream>

#include "Subject.h"
#include "ConcreteObserver1.h"
#include "ConcreteObserver2.h"

int main(int argc, const char * argv[]) {
    Subject subject;
    ConcreteObserver1 observer1;
    ConcreteObserver2 observer2;

    subject.AddObserver("Observer1", &observer1);
    subject.AddObserver("Observer2", &observer2);
    
    subject.NotifyAllObserver();
    
    return 0;
}
