//
//  networkInterfaceList.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "networkInterfaceList.hpp"
#include "networkInterface.cpp"

networkInterfaceList::networkInterfaceList(void)
{
    vector<networkInterface> listOfNets;
    string type;
    string line;
    ifstream finfo("/sys/class/net");
    while(getline(finfo,line))
    {
        stringstream ss;
        auto old_buf = cout.rdbuf(ss.rdbuf());
        cout.rdbuf(old_buf);
        system("ls");
        networks = ss.str();
        istringstream buf(networks);
        for (string word; buf >> word;)
        {
            ifstream finfo("/sys/class/net/"word);
            while(getline(finfo,line))
            {
                stringstream ss2;
                auto old_buf = cout.rdbuf(ss2.rdbuf());
                cout.rdbuf(old_buf);
                system("cat address");
                address = ss2.str();
            networkInterface node = new networkInterface(word, address);
        }
        
        }
        listOfNets.push_back(node);
    }
}

string networkInterfaceList::toString()
{
    ostringstream vstr;
    
    if (!listOfNets.empty())
    {
        copy(listOfNets.begin(), listOfNets.end() - 1, ostream_iterator<networkInterface> (vstr, ", "));
        
        vstr << listofNets.back();
    }
    
    cout << vstr.str() << endl;
    }
}

int main()
{
    networkInterfaceList nIL;
    nIL.toString();
    
    return 0;
}

