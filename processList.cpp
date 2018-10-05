//
//  processList.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "processList.hpp"

using namespace std;
using namespace boost::filesystem;

int main()
{
    path p("/proc");
    for (auto i = directory_iterator(p); i != directory_iterator(); i++)
    {

        
            cout << i->path().filename().string() << endl;
        

    }
}
