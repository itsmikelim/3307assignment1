//
//  processList.cpp
//  CS 3307 Assignment 1
//
// class that outputs and saves the a list of process
// objects
//
//  Created by Mike Lim.
//

#include "processList.hpp"

using namespace std;
std::vector<std::int> fileName;

bool is_integer(float k)
{
    return std::floor(k) == k;
}

int main(void)
{
    DIR *directory;
    struct dirent *dir;
    vector<int> fileList;
    int i=0;
    directory = opendir("/proc");
    if (directory)
    {
        while ((dir = readdir(d)) != NULL)
        {
            i++;

                fileList.push_back(dir->d_name);

        }
        for(int i=0;i<fileList.size();i++) {
            cout<<fileList[i]<<endl;
            doSomething(fileList[i]);
        }
        closedir(directory);
    }
    
    return(0);
}
