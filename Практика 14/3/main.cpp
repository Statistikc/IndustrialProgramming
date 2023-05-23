#include "Div.h"
#include <iostream>
#include <set>

int main()
{
    std::set<double> nums;
    std::cout << "got: " << Divisior::get(nums) << std::endl;

    nums.insert(3);
    std::cout << "added 3;" << std::endl;
    std::cout << "got: " << Divisior::get(nums) << std::endl;
}