//
//  process.cpp
//  CS 3307 Assignment 1
//
// class that creates and saves process objects with information like
// its process ID, name, owner UID, parent process ID, and state
//
//  Created by Mike Lim.
//

#include "process.hpp"

// constructor that takes arguments to set the variables
process::process(int inPid, string inName, int inOuid, int inPpid, string inState)
{
    pid = inPid;
    name = inName;
    ouid = inOuid;
    ppid = inPpid;
    state = inState;
}

// function to return the process ID
int process::getPid()
{
    return pid;
}

// function to return the name
string process::getName()
{
    return name;
}

// function to return the owner UID
int process::getOuid()
{
    return ouid;
}

// function to return the parent process ID
int process::getPpid()
{
    return ppid;
}

// function to return the state
string process::getState()
{
    return state;
}

// function to set the process ID
void process::setPid(int newPid)
{
    pid = newPid;
}

// function to set the name
void process::setName(string newName)
{
    name = newName;
}

// function to set the owner UID
void process::setOuid(int newOuid)
{
    ouid = newOuid;
}

// function to set the parent process ID
void process::setPpid(int newPpid)
{
    ppid = newPpid;
}

// function to set the state
void process::setState(string newState)
{
    state = newState;
}
