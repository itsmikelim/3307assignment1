//
//  processorInfo.cpp
//  CS 3307 Assignment 1
//
// class that outputs and saves information about the processor like
// its vendor, model name, and load averages
//
//  Created by Mike Lim.
//

#include "processorInfo.hpp"

// constructor that initializes the sysinfo into sysInfo
processorInfo::processorInfo(void)
{
    sysinfo(&sysInfo);
}

// function that returns the vendor
void processorInfo::getVendor()
{
    string type;
    string line;
    // use the file cpuinfo
    ifstream finfo("/proc/cpuinfo");
    while(getline(finfo,line))
    {
        stringstream str(line);
        // check for vendor_id
        if (getline(str, type, ':' ) && getline(str,info) && type.substr(0,9) == "vendor_id") {
            cout << info << endl;
            break;
        }
    }

}

// function that returns the model number
void processorInfo::getModelName()
{
    string type;
    string line;
    // uses the file cpuinfo
    ifstream finfo("/proc/cpuinfo");
    while(getline(finfo,line))
    {
        stringstream str(line);
        // check for model name
        if (getline(str, type, ':' ) && getline(str,info) && type.substr(0,10) == "model name") {
            cout << info << endl;
            break;
        }
    }
    
}

// function that returns the load averages
void processorInfo::getLoadAverages()
{
    cout << sysInfo.loads[3] << endl;
}


