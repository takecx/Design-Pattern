//
//  AbstractCreator.hpp
//  FactoryMethodPattern
//
//  Created by takecx on 2016/09/13.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef AbstractCreator_hpp
#define AbstractCreator_hpp

#include <stdio.h>
#include "AbstractProduct.hpp"

class AbstractCreator{
public:
    AbstractProduct* Create(){
        m_Product = FactoryMethod();
        return m_Product;
    }
    virtual AbstractProduct* FactoryMethod() = 0;
    
protected:
    AbstractProduct* m_Product = nullptr;
};

#endif /* AbstractCreator_hpp */
