//
//  ConcreteProduct.hpp
//  FactoryMethodPattern
//
//  Created by takecx on 2016/09/13.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef ConcreteProduct_hpp
#define ConcreteProduct_hpp

#include <stdio.h>
#include <iostream>
#include "AbstractProduct.hpp"

class ConcreteProduct
: public AbstractProduct
{
public:
    void Method1(){
        std::cout << "Method1() called." << std::endl;
    }
    void Method2(){
        std::cout << "Method2() called." << std::endl;        
    }
private:
    
};
#endif /* ConcreteProduct_hpp */
