#include <iostream>

int main() {
    bool val_01 {true};
    bool val_02 {false};
    bool val_03 {true};

    std::cout << "val 1: " << val_01 << std::endl;
    std::cout << "val 2: " << val_02 << std::endl;
    std::cout << "val 3: " << val_03 << std::endl;

    std::cout << std::endl;
    std::cout << "comparing vals " << std::endl;

    std::cout << std::boolalpha;
    std::cout << "val 1 && val 2 = " << (val_01 && val_02) << std::endl;
    std::cout << "val 1 && val 3 = " << (val_01 && val_03) << std::endl;
    std::cout << "val 1 && val 2 && val 3 = " << (val_01 && val_02 && val_03) << std::endl;
    std::cout << std::endl;
    std::cout << "val 1 || val 2 = " << (val_01 || val_02) << std::endl;
    std::cout << "val 1 || val 2 = " << (val_01 || val_03) << std::endl;
    std::cout << "val 1 || val 2 || val 3 = " << (val_01 || val_02 || val_03) << std::endl;
    std::cout << std::endl;
    std::cout << "!val 1 = " << (!val_01) << std::endl;
    std::cout << "!val 2 = " << (!val_02) << std::endl;
    std::cout << std::endl;
    std::cout << "!(val 1 && val 2) == val 3 = " << (!(val_01 && val_02) == val_03) << std::endl;
}