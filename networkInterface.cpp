//
//  networkInterfaces.cpp
//  CS 3307 Assignment 1
//
// class to create networkInterface objects that holds a network interface
// and its MAC address
//  Created by Mike Lim.
//

#include "networkInterface.hpp"

// constructor that takes arguments
networkInterface::networkInterface(string inputInterface, string inputMac)
{
    interface = inputInterface;
    mac = inputMac;
}

// function to return the interface
string networkInterface::getNetworkInterface()
{
    return interface;
}

// function to return the MAC address
string networkInterface::getMac()
{
    return mac;
}

// function to set the interface
void networkInterface::setNetworkInterface(string newInterface)
{
    interace = newInterface;
}

// function to set the MAC address
void networkInterface::setMac(string newMac)
{
    mac = newMac;
}
