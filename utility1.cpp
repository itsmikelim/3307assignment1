//
//  utility1.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#include "utility1.hpp"
#include "systemHostName.cpp"
#include "operatingSystemDetails.cpp"
#include "processorInfo.cpp"
#include "memoryInfo.cpp"
//#include "networkInterfaceList.cpp"
//#include "networkInterface.cpp"
//#include "process.cpp"
//#include "processList.cpp"



int main()
{
    systemHostName shn;
    shn.getHostName();
    
    operatingSystemDetails osd;
    osd.OSName();
    osd.systemRelease();
    osd.systemVersion();
    osd.machineData();
    osd.systemUptime();
    
    processorInfo PI;
    PI.getVendor();
    PI.getModelName();
    PI.getLoadAverages();
    
    memoryInfo mI;
    mI.totalMemory();
    mI.freeMemory();
    
    return  0;
}
