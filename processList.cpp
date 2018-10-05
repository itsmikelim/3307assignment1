//
//  processList.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "processList.hpp"
processList::processList(void)
{
    namespace fs = std::experimental::filesystem;
    std::string path = "/proc";
    for (const auto & p : fs::directory_iterator(path))
        std::cout << p << std::endl;
}


int main()
{
    processList pL;
    
    return 0;
}

