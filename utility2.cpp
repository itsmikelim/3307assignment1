//
//  utility2.cpp
//  CS 3307 Assignment 1
//
//  utility class that asks the user what information they would like to know
//  continues to ask until the user inputs exit
//  Created by Mike Lim.
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
    
    // continue to loop if the user did not input exit
    while (response != "exit") {
        cout << "\nWould you like to know the information of hostname, operating system, processor, memory, network interfaces, processes, or exit?\n\n";
    
        getline(cin, response);
    
        // check if user inputted hostname
        if (response == "hostname") {
            systemHostName shn;
            shn.getHostName();
        }
        
        // check if user inputted operating system
        if (response == "operating system"){
            operatingSystemDetails osd;
            osd.OSName();
            osd.systemRelease();
            osd.systemVersion();
            osd.machineData();
            osd.systemUptime();
            }
        
        // check if user inputted processor
        if (response == "processor") {
            processorInfo PI;
            PI.getVendor();
            PI.getModelName();
            PI.getLoadAverages();
        }
        
        // check if user inputted memory
        if (response == "memory") {
            memoryInfo mI;
            mI.totalMemory();
            mI.freeMemory();
        }
        
        // check if user inputted network interfaces
       // if (response == "network interfaces") {
       //     networkInterfaceList nIL;
       //     nIL.toString();
       // }
        
        // check if user inputted processes
       // if (response == "processes") {
       //     processList pL;
       //     pL.toString();
       // }

    }
    return 0;

}
