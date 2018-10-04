//
//  systemHostName.hpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim on 2018-10-04.
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


