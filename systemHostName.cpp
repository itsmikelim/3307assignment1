//
//  Assign1.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#include "systemHostName.hpp"

systemHostName::systemHostName(void)
{
    sysHostName = system("hostname");
}

string systemHostName::getHostName()
{
    cout << sysHostName << endl;
}

int main()
{
    systemHostName shn;
    //shn.getHostName();
    
    return 0;
}
