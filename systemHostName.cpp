//
//  systemHostName.cpp
//  CS 3307 Assignment 1
//
//  class that outputs and saves the system's host name
//
//  Created by Mike Lim.
//

#include "systemHostName.hpp"

systemHostName::systemHostName(void)
{
    // create a stringstream to input string
    stringstream ss;
    auto old_buf = cout.rdbuf(ss.rdbuf());
    cout.rdbuf(old_buf);
    system("hostname");                 // system call hostname
    sysHostName = ss.str();
    
}

// function to output the system host name
void systemHostName::getHostName()
{
    cout << sysHostName;
}

