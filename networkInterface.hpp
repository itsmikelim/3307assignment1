//
//  networkInterface.hpp
//  CS 3307 Assignment 1
//
//  Header file for the class networkInterface
//  Initializes the private and public variables needed
//
//  Created by Mike Lim.
//

#ifndef networkInterface_hpp
#define networkInterface_hpp
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <sys/sysinfo.h>
using namespace std;

class networkInterface
{
private:
    string inputInterface;
    string inputMac:
    string interface;
    string mac
    
public:
    string getNetworkInterface();
    string getMac();
    void setNetworkInterface(string newInterface);
    void setMac(string newMac);
    networkInterface;
    
}

#endif /* networkInterface_hpp */
