//
//  operatingSystemDetails.hpp
//  CS 3307 Assignment 1
//
//  Header file for the class operatingSystemDetails
//  Initializes the private and public variables needed
//
//  Created by Mike Lim.
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
    struct sysinfo info;
    struct utsname name;
    // constants that show how many seconds in a day, hour, and minute
    const int secInDay = 86400;
    const int secInHour = 3600;
    const int secInMinute = 60;
    
    
public:
    
    void OSName();
    void systemRelease();
    void systemVersion();
    void systemUptime();
    void machineData();
    operatingSystemDetails();
};


#endif /* operatingSystemDetails_hpp */
