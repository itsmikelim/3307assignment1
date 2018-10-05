//
//  processorInfo.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "processorInfo.hpp"

processorInfo::processorInfo(void)
{
    sysinfo(&sysInfo);
}

void processorInfo::getVendor()
{
    string type;
    string line;
    ifstream finfo("/proc/cpuinfo");
    while(getline(finfo,line))
    {
        stringstream str(line);
        if (getline(str, type, ':' ) && getline(str,info) && type.substr(0,9) == "vendor_id") {
            cout << info << endl;
            break;
        }
    }

}

void processorInfo::getModelName()
{
    string type;
    string line;
    ifstream finfo("/proc/cpuinfo");
    while(getline(finfo,line))
    {
        stringstream str(line);
        if (getline(str, type, ':' ) && getline(str,info) && type.substr(0,10) == "model name") {
            cout << info << endl;
            break;
        }
    }
    
}

void processorInfo::getLoadAverages()
{
    cout << sysInfo.loads[3] << endl;
}


int main() {
    processorInfo PI;
    PI.getLoadAverages();
    
    return 0;
}
