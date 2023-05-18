#include <iostream>

int main(){
    int val_01 {30};
    int val_02 {11};

    std::cout << "val 1: " << val_01 << std::endl;
    std::cout << "val 2: " << val_02 << std::endl;

    std::cout << std::endl;
    std::cout << "comparing vals " << std::endl;

    std::cout << std::boolalpha;
    std::cout << "val 1 < val 2 " << (val_01 < val_02) << std::endl;
    std::cout << "val 1 <= val 2 " << (val_01 <= val_02) << std::endl;
    std::cout << "val 1 > val 2 " << (val_01 > val_02) << std::endl;
    std::cout << "val 1 >= val 2 " << (val_01 >= val_02) << std::endl;
    std::cout << "val 1 == val 2 " << (val_01 == val_02) << std::endl;
    std::cout << "val 1 != val 2 " << (val_01 != val_02) << std::endl;
}