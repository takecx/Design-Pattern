//
//  SingletonLogger_DynamicAllocate.hpp
//  SingletonPattern
//
//  Created by takecx on 2016/09/10.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef SingletonLogger_DynamicAllocate_hpp
#define SingletonLogger_DynamicAllocate_hpp

#include <stdio.h>
#include <string>

class SingletonLogger_DynamicAllocate{
public:
    SingletonLogger_DynamicAllocate(const SingletonLogger_DynamicAllocate& inLogger) = delete;
    SingletonLogger_DynamicAllocate& operator=(const SingletonLogger_DynamicAllocate& inLogger) = delete;
    SingletonLogger_DynamicAllocate& operator=(SingletonLogger_DynamicAllocate&& inLogger) = delete;
    SingletonLogger_DynamicAllocate(SingletonLogger_DynamicAllocate&& inLogger) = delete;
    
    static SingletonLogger_DynamicAllocate& GetInstance();
    static void CreateSingleton();
    static void DestroySingleton();
    
    static void LogOut(const std::string& inMessage);
    
private:
    static SingletonLogger_DynamicAllocate* m_SingletonLogger;
    
    SingletonLogger_DynamicAllocate() = default;
    ~SingletonLogger_DynamicAllocate() = default;
};


#endif /* SingletonLogger_DynamicAllocate_hpp */
