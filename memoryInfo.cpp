//
//  memoryInfo.cpp
//  CS 3307 Assignment 1
//
// class that outputs and saves information about memory like
// the amount of total memory and the amount of free memory
//
//  Created by Mike Lim.
//

#include "memoryInfo.hpp"

// constructor that initializes sysinfo into info
memoryInfo::memoryInfo(void)
{
    sysinfo(&info);
}

// function that returns the total memory
void memoryInfo::totalMemory()
{
    cout << info.totalram << endl;
}

// function that returns the amount of free memory
void memoryInfo::freeMemory()
{
    cout << info.freeram << endl;
}

