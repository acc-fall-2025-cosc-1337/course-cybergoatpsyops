#include <iostream>
#include "int.h"

int echo_variable(int num)
{
    int num1=7*7;
    int num2=5*5;

    std::cout << "Product 1: " << num1 << ", Product 2: " << num2 << std::endl;
    return num;
}