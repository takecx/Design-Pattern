//
//  main.cpp
//  SingletonPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#include <iostream>

#include "SingletonLogger.hpp"
#include "SingletonLogger_DynamicAllocate.hpp"

int main(int argc, const char * argv[]) {

    //Create static object when first GetInstance() call.
    SingletonLogger::GetInstance().LogOut("puyopuyo");

    //Dynamic Allocation Type
    SingletonLogger_DynamicAllocate::CreateSingleton();
    SingletonLogger_DynamicAllocate::LogOut("bayobayo");
    SingletonLogger_DynamicAllocate::DestroySingleton();

    //SingletonLogger* logger = new SingletonLogger();    //Error
    //SingletonLogger_DynamicAllocate* logger = new SingletonLogger_DynamicAllocate();    //Error
    
    return 0;
}
