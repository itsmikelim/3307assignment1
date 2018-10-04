//
//  processorInfo.hpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#ifndef processorInfo_hpp
#define processorInfo_hpp
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <sys/sysinfo.h>
using namespace std;


class processorInfo
{
private:
    string info;
    struct sysinfo sysInfo;
public:
    void getVendor();
    void getModelName();
    void getLoadAverages();
    processorInfo();
};


#endif /* processorInfo_hpp */
