#include <iostream>

int addNums(int a, int b) 
{      
    return a + b;
}

int main() 
{
    int first_num {3}; // Statement
    int second_num {7};

    std::cout << "fist num is " << first_num << std::endl;
    std::cout << "second num is " << second_num << std::endl;

    std::cout << "sum is " << addNums(first_num, second_num) << std::endl;

    return 0;
}