#include <iostream>

int main() {

    char character_01 {'a'};
    char character_02 {'r'};
    char character_03 {'r'};
    char character_04 {'o'};
    char character_05 {'w'};

    std::cout << character_01 << std::endl;
    std::cout << character_02 << std::endl;
    std::cout << character_03 << std::endl;
    std::cout << character_04 << std::endl;
    std::cout << character_05 << std::endl;


    // one byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;

    char val = 65; // ASCII character code for 'A'
    std::cout << "val : " << val << std::endl; // A
    std::cout << "val(int)" << static_cast<int>(val) << std::endl;

    return 0;
}