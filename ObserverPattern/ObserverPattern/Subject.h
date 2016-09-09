//
//  Subject.h
//  ObserverPattern
//
//  Created by takecx on 2016/09/09.
//  Copyright © 2016年 takecx. All rights reserved.
//

#ifndef Subject_h
#define Subject_h

#include <map>
#include <string>
#include "Observer.h"

class Subject{
public:
    /*---------------------------Observer Pattern---------------------------*/
    void AddObserver(const std::string& inObserverName, Observer* inObserver);
    void RemoveObserver(const std::string& inObserverName);
    void NotifyAllObserver();
    void NotifySpecificObserver(const std::string& inObserverName);
    /*---------------------------Observer Pattern---------------------------*/

private:
    std::map<std::string,Observer*> m_Observers;
};

#endif /* Subject_h */
