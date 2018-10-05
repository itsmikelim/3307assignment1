//
//  utility2.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#include "utility2.hpp"
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
    string response;
    
    while (response != "exit") {
        cout << "Would you like to know the information of hostname, operating system, processor, memory, network interfaces, process, or exit?";
    
        getline(cin, response);
    
        switch(response) {
            case hostname: systemHostName shn;
                shn.getHostName();
                break;
            case operating system: operatingSystemDetails osd;
                osd.OSName();
                osd.systemRelease();
                osd.systemVersion();
                osd.machineData();
                osd.systemUptime();
                break;
            case processor: processorInfo PI;
                PI.getVendor();
                PI.getModelName();
                PI.getLoadAverages();
                break;
            case memory: memoryInfo mI;
                mI.totalMemory();
                mI.freeMemory();
                break;
                //case network interface:
                //case process:
    
        }
    }
    return 0
}
