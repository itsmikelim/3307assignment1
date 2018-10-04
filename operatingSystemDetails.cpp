//
//  operatingSystemDetails.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#include "operatingSystemDetails.hpp"

operatingSystemDetails::operatingSystemDetails(void)
{
    info = sysinfo();
    name = uname();
}

void operatingSystemDetails::getOSName()
{
    
    cout << uname.sysname;
}

void

int main()
{
    operatingSystemDetails osd;
    osd.getOSName();
    
    return 0;
}
