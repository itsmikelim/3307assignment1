//
//  operatingSystemDetails.hpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#ifndef operatingSystemDetails_hpp
#define operatingSystemDetails_hpp
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <sys/sysinfo.h>
#include <sys/utsname.h>

using namespace std;


class operatingSystemDetails
{
private:
    sysinfo info;
    uname name;
    
//    string systemName;
//    string systemRelease;
//    string systemVersion;
//    long systemUptime;
    
public:
    
    void getOSName();
    void systemRelease();
    void systemVersion();
    void systemUptime();
    operatingSystemDetails();
};


#endif /* operatingSystemDetails_hpp */
