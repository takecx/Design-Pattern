//
//  SingletonLogger.cpp
//  SingletonPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#include "SingletonLogger.hpp"
#include <iostream>

SingletonLogger& SingletonLogger::GetInstance(){
    static SingletonLogger m_SingletonLogger;
    return m_SingletonLogger;
}

void SingletonLogger::LogOut(const std::string& inMessage){
    std::cout << "Message : " << inMessage << std::endl;
}
