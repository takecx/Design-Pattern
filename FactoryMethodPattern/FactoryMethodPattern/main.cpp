//
//  main.cpp
//  FactoryMethodPattern
//
//  Created by takecx on 2016/09/12.
//  Copyright © 2016年 takecx. All rights reserved.
//

//クライアントがConcreteProductを全く知らないでも良い
// client need not know ConcreteProduct
//client -> ConcreteCreator -> ConcreteProduct

#include <iostream>
#include "ConcreteCreator.hpp"

int main(int argc, const char * argv[]) {
    
    AbstractCreator* creator = new ConcreteCreator();
    
    AbstractProduct* product = creator->Create();
    product->Method1();
    product->Method2();
    
    return 0;
}
