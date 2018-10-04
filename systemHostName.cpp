//
//  Assign1.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#include "systemHostName.hpp"
#include <unistd.h>

systemHostName::systemHostName(void)
{
    sysHostName = system("hostname")
}

string systemHostName::getHostName()
{
    cout << sysHostName << endl;
}
