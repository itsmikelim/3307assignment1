//
//  networkInterfaceList.hpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#ifndef networkInterfaceList_hpp
#define networkInterfaceList_hpp
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <sys/types.h>
#include <ifaddrs.h>
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

class networkInterfaceList
{
private:
    vector<networkInterface> listOfNets;
    
public:
    string toString();
    networkInterfaceList();
    
};

#endif /* networkInterfaceList_hpp */
