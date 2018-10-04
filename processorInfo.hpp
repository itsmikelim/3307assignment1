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
using namespace std;


class processorInfo
{
private:
    string info;
    
public:
    void getVendor();
    processorInfo();
};


#endif /* processorInfo_hpp */
