#include <iostream>
#include "compute_sd.h"
#include <vector>
#include <queue>
#include "utils.h"
#include "custom_lib.h"

int main()
{
    std::vector<float> vec1{1,2,3,4,5};
    std::deque<float> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    std::cout<<calculateSD(vec1) << std::endl;
    std::cout<<calculateSD(d) << std::endl;
    print_solved();
    std::cout<< bigger_by_factor(10, 1, 5) << "\n";
    std::cout<< bigger_by_factor(10, 1, 50) << "\n";
    std::cout<< bigger_by_factor(1, 5, 2) << "\n";
    print_custom(1);
    return 0;
}
