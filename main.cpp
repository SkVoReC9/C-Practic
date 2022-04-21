#include <iostream>
#ifndef C_HPP_INCLUDED
#define C_HPP_INCLUDED
#include "/home/skvorec/VsCodeProjects/CalcClass.hpp"
#endif

int main(int argc, char *argv[])
{
    int a,b;
    CalcSuper<int> super; 

    if(argc != 3)
    {
        std::cerr<<"Some Argumets missed! 'Program name' param1 param2"<<std::endl;
        return 1;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    std::cout<< super.add(&a, &b)<< std::endl;
    std::cout<< super.minus(&a,&b)<< std::endl;
    return 0;
}