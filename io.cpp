#include "io.h"
#include <iostream>

int readNumber(){

    int num{};
    std::cout << "Enter a number";
    std::cin >> num;

    return num;
}

int writeAnswer(int x , int y){

    int addedNum = x + y;
    
    std::cout << "The addition of " << x << " and " << y << " is " << addedNum;

    return 0;
}