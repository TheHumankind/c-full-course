#include <iostream>

int main() {

    int var_01 {123};
    std::cout << "var_01: " << var_01 << std::endl;

    var_01 = 333;
    std::cout << "var_01: " << var_01 << std::endl;


    std::cout << "----------------------------------------" << std::endl;

    double var_02 {123.4};
    std::cout << "var_02: " << var_02 << std::endl;

    var_02 = 333.3;
    std::cout << "var_02: " << var_02 << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    bool var_03 {false};
    std::cout << "var_03: " << var_03 << std::endl;

    var_03 = true;
    std::cout << "var_03: " << var_03 << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    auto var_04 {333u};
    std::cout << "var_04: " << var_04 << std::endl; // declare and initialize with type deduction

    var_04 = -22;
    std::cout << "var_04: " << var_04 << std::endl; // must be -22 but compiler put gurbage value



    return 0;
}