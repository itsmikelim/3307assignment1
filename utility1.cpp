//
//  utility1.cpp
//  CS 3307 Assignment 1
//
//  utility class that prints all of the information of each class
//
//  Created by Mike Lim.
//

#include "utility1.hpp"
#include "systemHostName.cpp"
#include "operatingSystemDetails.cpp"
#include "processorInfo.cpp"
#include "memoryInfo.cpp"
#include "networkInterfaceList.cpp"
#include "networkInterface.cpp"
#include "process.cpp"
#include "processList.cpp"


// create an object of each class
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
    
    networkInterfaceList nIL;
    nIL.toString();
    
    processList pL;
    pL.toString();
    
    return  0;
}
