//
//  memoryInfo.hpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#ifndef memoryInfo_hpp
#define memoryInfo_hpp
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <sys/sysinfo.h>
using namespace std;

class memoryInfo
{
private:
    struct sysinfo info;

public:
    
    void totalMemory();
    void freeMemory();
    memoryInfo();
};

#endif /* memoryInfo_hpp */
