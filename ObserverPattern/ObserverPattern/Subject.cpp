//
//  Subject,cpp.cpp
//  ObserverPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#include <stdio.h>
#include "Subject.h"

/*---------------------------Observer Pattern---------------------------*/
void Subject::AddObserver(const std::string& inObserverName, Observer* inObserver){
    m_Observers.insert(std::pair<std::string,Observer*>(inObserverName,inObserver));
}

void Subject::RemoveObserver(const std::string& inObserverName){
    m_Observers.erase(inObserverName);
}

void Subject::NotifyAllObserver(){
    for(auto tempObserver : m_Observers){
        tempObserver.second->Update();
    }
}

void Subject::NotifySpecificObserver(const std::string& inObserverName){
    for(auto tempObserver : m_Observers){
        if(tempObserver.first == inObserverName){
            tempObserver.second->Update();            
        }
    }
}
/*---------------------------Observer Pattern---------------------------*/
