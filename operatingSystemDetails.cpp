//
//  operatingSystemDetails.cpp
//  CS 3307 Assignment 1
//
//  class that outputs and saves details about the operating system
//  such as its operating system name, release, version, machine data,
//  and system uptime
//
//  Created by Mike Lim.
//

#include "operatingSystemDetails.hpp"

// constructor that initializes sysinfo and uname into info and name
operatingSystemDetails::operatingSystemDetails(void)
{
    sysinfo(&info);
    uname(&name);
}

// function that outputs the operating system name
void operatingSystemDetails::OSName()
{
    cout << name.sysname << endl;
}

// function that outputs the system release
void operatingSystemDetails::systemRelease()
{
    cout << name.release << endl;
}

// function that outputs the system version
void operatingSystemDetails::systemVersion()
{
    cout << name.version << endl;
}

// function that outputs the machine data
void operatingSystemDetails::machineData()
{
    cout << name.machine << endl;
}

// function that outputs the system uptime
void operatingSystemDetails::systemUptime()
{
    // each modulo resets the seconds variable to account for the
    // previous calculation
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

