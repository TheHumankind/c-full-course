#include <iostream>

int main() {

    // for (int i{0}; i < 10; i++) {
    //     std::cout << "i love c++" << std::endl;
    // }
    
    // for (size_t i{0}; i < 10; ++i)
    // {
    //    std::cout << i + 1 << " : i love c++" << std::endl;
    // }

    for (size_t i{0}; i < 10; ++i)
    {
       std::cout << i + 1 << " : i love c++" << std::endl;
    }

    // std::cout << i << std::endl; -------------  compile error outside the prev scope
    
    return 0;
}