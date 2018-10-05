//
//  operatingSystemDetails.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "operatingSystemDetails.hpp"

operatingSystemDetails::operatingSystemDetails(void)
{
    sysinfo(&info);
    uname(&name);
}

void operatingSystemDetails::OSName()
{
    cout << name.sysname << endl;
}

void operatingSystemDetails::systemRelease()
{
    cout << name.release << endl;
}

void operatingSystemDetails::systemVersion()
{
    cout << name.version << endl;
}

void operatingSystemDetails::machineData()
{
    cout << name.machine << endl;
}

void operatingSystemDetails::systemUptime()
{
    int seconds, minutes, hours, days;
    seconds = info.uptime;
    days = seconds / secInDay;
    seconds = seconds % secInDay;
    hours = seconds / secInHour;
    seconds = seconds % secInHour;
    minutes = seconds / secInMinute;
    seconds = seconds % secInMinute;
    
    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;
}

