#include <iostream>

int main() {
    int max {};

    int var_01 {10};
    int var_02 {11};

    max = (var_01 > var_02) ? var_01 : var_02;

    std::cout << "max is " << max << std::endl;
}