//
//  operatingSystemDetails.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#include "operatingSystemDetails.hpp"

operatingSystemDetails::operatingSystemDetails(void)
{
    sysinfo(&info);
    uname(&name);
}

void operatingSystemDetails::getOSName()
{
    
    cout << name.sysname;
}


int main()
{
    operatingSystemDetails osd;
    osd.getOSName();
    
    return 0;
}
