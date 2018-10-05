//
//  systemHostName.hpp
//  CS 3307 Assignment 1
//
//  Header file for the class systemHostName
//  Initializes the private and public variables needed
//
//  Created by Mike Lim.
//

#ifndef systemHostName_H
#define systemHostName_H
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class systemHostName
{
    private:
        string sysHostName;
    
    public:
        void getHostName();
        systemHostName();
};

#endif /* systemHostName_hpp */


