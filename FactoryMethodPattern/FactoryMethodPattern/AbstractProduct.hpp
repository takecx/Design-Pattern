//
//  AbstractProduct.hpp
//  FactoryMethodPattern
//
//  Created by takecx on 2016/09/13.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef AbstractProduct_hpp
#define AbstractProduct_hpp

#include <stdio.h>

class AbstractProduct {
public:
    virtual void Method1() = 0;
    virtual void Method2() = 0;
private:
    
};
#endif /* AbstractProduct_hpp */
