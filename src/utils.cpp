#include <iostream>

void print_solved()
{
    std::cout<<"Solved!\n";
}

bool bigger_by_factor(float a, float b, float factor)
{
    return a > (b*factor);
}