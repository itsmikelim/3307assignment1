//
//  process.hpp
//  CS 3307 Assignment 1
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
    string ouid;
    string ppid;
    string state;
    string getPid();
    string getName();
    string getOuid();
    string getPpid();
    string getState();
    void setPid(int newPid);
    void setName(string newName);
    void setOuid(string newOuid);
    void setPpid(string newPpid);
    void setState(string newState);
    process();
    
};

#endif /* process_hpp */
