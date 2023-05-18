#include <iostream>

int main() {
    int num_01 = 15; // decimal
    int num_02 = 017; // octal
    int num_03 = 0x0F; // hexadecimal
    int num_04 = 0b00001111; // binary

    std::cout << "num 1 = " << num_01 << std::endl;
    std::cout << "num 2 = " << num_02 << std::endl;
    std::cout << "num 3 = " << num_03 << std::endl;
    std::cout << "num 4 = " << num_04 << std::endl;

    std::cout << "sizeOf num 1 = " << sizeof(num_01) << std::endl;

    return 0;
}