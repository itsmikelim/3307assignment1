//
//  processorInfo.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "processorInfo.hpp"

processorInfo::processorInfo(void)
{
    
}

void processorInfo::getVendor()
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

int main()
{
    processorInfo PI;
    PI.getVendor();
    
    return 0;
}
