//
//  process.hpp
//  CS 3307 Assignment 1
//
//  Header file for the class process
//  Initializes the private and public variables needed
//
//  Created by Mike Lim.
//

#ifndef process_hpp
#define process_hpp
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
    int pid;
    string name;
    int ouid;
    int ppid;
    string state;
    int getPid();
    string getName();
    int getOuid();
    int getPpid();
    string getState();
    void setPid(int newPid);
    void setName(string newName);
    void setOuid(int newOuid);
    void setPpid(int newPpid);
    void setState(string newState);
    process();
    
};

#endif /* process_hpp */
