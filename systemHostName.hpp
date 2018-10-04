//
//  Assign1.hpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
//

#ifndef systemHostName
#define systemHostName
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class systemHostName
{
    private:
        string sysHostName;
    
    public:
        string getHostName();
        systemHostName();
};

#endif /* Assign1_hpp */


