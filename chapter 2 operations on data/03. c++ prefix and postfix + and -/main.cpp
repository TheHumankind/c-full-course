#include <iostream>

int main() {
    signed int val = 0;

    std::cout << "val with postfix ++ = " << val++ << std::endl;
    std::cout << "val after operation = " << val << std::endl;
    std::cout << "----------------------" << std::endl;

    std::cout << "val with postfix -- = " << val-- << std::endl;
    std::cout << "val after operation = " << val << std::endl;
    std::cout << "----------------------" << std::endl;

    std::cout << "val with prefix ++ = " << ++val << std::endl;
    std::cout << "val after operation = " << val << std::endl;
    std::cout << "----------------------" << std::endl;

    std::cout << "val with prefix -- = " << --val << std::endl;
    std::cout << "val after operation = " << val << std::endl;
    std::cout << "----------------------" << std::endl;

    return 0;
}