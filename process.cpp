//
//  process.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "process.hpp"

process::process(int inPid, string inName, string inOuid, string inPpid, string inState)
{
    pid = inPid;
    name = inName;
    ouid = inOuid;
    ppid = inPpid;
    state = inState;
}

int process::getPid()
{
    return pid;
}

string process::getName()
{
    return name;
}

string process::getOuid()
{
    return ouid;
}

string process::getPpid()
{
    return ppid;
}

string process::getState()
{
    return state;
}

void process::setPid(int newPid)
{
    pid = newPid;
}

void process::setName(string newName)
{
    name = newName;
}
void process::setOuid(string newOuid)
{
    ouid = newOuid;
}
void process::setPpid(string newPpid)
{
    ppid = newPpid;
}
void process::setState(string newState)
{
    state = newState;
}
