//
//  memoryInfo.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "memoryInfo.hpp"

memoryInfo::memoryInfo(void)
{
    sysinfo(&info);
}

void memoryInfo::totalMemory()
{
    cout << info.totalram << endl;
}

void memoryInfo::freeMemory()
{
    cout << info.freeram << endl;
}

int main()
{
    memoryInfo mI;
    mI.totalMemory();
    mI.freeMemory();
    
    return 0;
}
