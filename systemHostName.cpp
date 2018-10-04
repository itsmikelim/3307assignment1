//
//  systemHostName.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "systemHostName.hpp"

systemHostName::systemHostName(void)
{
    stringstream ss;
    auto old_buf = cout.rdbuf(ss.rdbuf());
    cout.rdbuf(old_buf);
    system("hostname");
    sysHostName = ss.str();
    
}

void systemHostName::getHostName()
{
    cout << sysHostName;
}

int main()
{
    systemHostName shn;
    shn.getHostName();
    
    return 0;
}
