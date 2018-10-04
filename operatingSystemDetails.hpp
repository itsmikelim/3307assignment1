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
    struct sysinfo info;
    struct utsname name;
    int seconds, minutes, hours, days;
    const int secInDay = 86400;
    const int secInHour = 3600;
    const int secInMinute = 60;
    
//    string systemName;
//    string systemRelease;
//    string systemVersion;
//    long systemUptime;
    
public:
    
    void OSName();
    void systemRelease();
    void systemVersion();
    void systemUptime();
    void machineData();
    operatingSystemDetails();
};


#endif /* operatingSystemDetails_hpp */
