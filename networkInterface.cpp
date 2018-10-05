//
//  networkInterfaces.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "networkInterface.hpp"

networkInterface::networkInterface(string inputInterface, string inputMac)
{
    interface = inputInterface;
    mac = inputMac;
}

string networkInterface::getNetworkInterface()
{
    return interface;
}

string networkInterface::getMac()
{
    return mac;
}

void networkInterface::setNetworkInterface(string newInterface)
{
    interace = newInterface;
}

void networkInterface::setMac(string newMac)
{
    mac = newMac;
}
