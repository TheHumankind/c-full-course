#include <iostream>

int main() {
    int num_1 {8};
    int num_2 {5};

    std::cout << "a + b = " << num_1 + num_2 << std::endl;
    std::cout << "a - b = " << num_1 - num_2 << std::endl;
    std::cout << "a * b = " << num_1 * num_2 << std::endl;
    std::cout << "a / b = " << num_1 / num_2 << std::endl;
    std::cout << "a % b = " << num_1 % num_2 << std::endl;

    return 0;
}