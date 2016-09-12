//
//  SingletonLogger.hpp
//  SingletonPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

//  Singleton object create two way.
//  1.First GetInstance() called.
//  2.First Create() called.

#ifndef SingletonLogger_hpp
#define SingletonLogger_hpp

#include <stdio.h>
#include <string>

class SingletonLogger{
public:
    SingletonLogger(const SingletonLogger& inLogger) = delete;
    SingletonLogger& operator=(const SingletonLogger& inLogger) = delete;
    SingletonLogger& operator=(SingletonLogger&& inLogger) = delete;
    SingletonLogger(SingletonLogger&& inLogger) = delete;
    
    static SingletonLogger& GetInstance();

    static void LogOut(const std::string& inMessage);

private:
    SingletonLogger() = default;
    ~SingletonLogger() = default;
};

#endif /* SingletonLogger_hpp */
