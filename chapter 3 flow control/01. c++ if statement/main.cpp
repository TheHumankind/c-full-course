#include <iostream>

int main() {
    int num_01 {10};
    int num_02 {20};
    
    bool res = (num_01 < num_02);

    std::cout << std::boolalpha << "res = " << res << std::endl;

    std::cout << std::endl;
    std::cout << "free stand if statement" << std::endl;

    if (res == true) {
        std::cout << num_01 << "is less than" << num_02 << std::endl;
    }

    if (!(res == true)) {
        std::cout << num_01 << "is NOT less then" << num_02 << std::endl;
    }

    if (res == true) {
        std::cout << num_01 << "is less than" << num_02 << std::endl;
    } else {
        std::cout << num_01 << "is NOT less then" << num_02 << std::endl;
    }

    if (res == true) {
        std::cout << num_01 << "is less than" << num_02 << std::endl;
    } else if (!(res == true)) {
        std::cout << num_01 << "is NOT less then" << num_02 << std::endl;
    }
}