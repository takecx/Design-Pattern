//
//  ConcreteCreator.hpp
//  FactoryMethodPattern
//
//  Created by takecx on 2016/09/13.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef ConcreteCreator_hpp
#define ConcreteCreator_hpp

#include <stdio.h>
#include "AbstractCreator.hpp"
#include "ConcreteProduct.hpp"

class ConcreteCreator
: public AbstractCreator
{
public:
    AbstractProduct* FactoryMethod(){
        if(m_Product == nullptr){
            m_Product = new ConcreteProduct();
        }
        return m_Product;
    }
private:
};

#endif /* ConcreteCreator_hpp */