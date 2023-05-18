#include <iostream>

int main() {
    
    bool red_l {true};
    bool green_l {false};

    if (red_l == true) {
        std::cout << "stop!" << std::endl;
    } else {
        std::cout << "go through!" << std::endl;
    }

    if (green_l) {
        std::cout << "green!" << std::endl;
    } else {
        std::cout << "not green!" << std::endl;
    }

    //sizeof()

    std::cout<< "sizeof(bool) = " << sizeof(bool) << std::endl;

    // bool output
    // std::cout << std::boolalpha; if true/false value needed
    std::cout<< "red_l = " << red_l << std::endl;
    std::cout<< "green_l = " << green_l << std::endl;

    return 0;
}