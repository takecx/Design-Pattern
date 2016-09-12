//
//  SingletonLogger_DynamicAllocate.cpp
//  SingletonPattern
//
//  Created by takecx on 2016/09/10.
//  Copyright © 2016年 takecx. All rights reserved.
//

#include "SingletonLogger_DynamicAllocate.hpp"
#include <iostream>

//Initialize static member
SingletonLogger_DynamicAllocate* SingletonLogger_DynamicAllocate::m_SingletonLogger = nullptr;

SingletonLogger_DynamicAllocate& SingletonLogger_DynamicAllocate::GetInstance(){
    return *m_SingletonLogger;
}

void SingletonLogger_DynamicAllocate::CreateSingleton(){
    if(m_SingletonLogger == nullptr){
        m_SingletonLogger = new SingletonLogger_DynamicAllocate();
    }
}

void SingletonLogger_DynamicAllocate::DestroySingleton(){
    if(m_SingletonLogger != nullptr){
        delete m_SingletonLogger;
    }
}

void SingletonLogger_DynamicAllocate::LogOut(const std::string& inMessage){
    std::cout << "Message : " << inMessage << std::endl;
}
