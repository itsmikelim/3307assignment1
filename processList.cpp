//
//  processList.cpp
//  CS 3307 Assignment 1
//
//  Created by Mike Lim.
//

#include "processList.hpp"
namespace fs = std::filesystem;

int main()
{
    std::string path = "/path/to/directory";
    for (auto & p : fs::directory_iterator(path))
        std::cout << p << std::endl;
}

