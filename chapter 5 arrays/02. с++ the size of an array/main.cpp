#include <iostream>

int main() {

    // c++ std::size operator [c++17 and more]

    int data[] {1, 2, 3, 4, 5 ,6, 7, 8, 9, 10};
    data[11] = 11;
    int size = std::size(data);
    std::cout << data[10] << std::endl;
    std::cout << size << std::endl;

    // c++ sizeof operator [c++17 and less]

    std::cout << "size of data: " << sizeof(data) << std::endl;
    std::cout << "size of data[0]: " << sizeof(data[0]) << std::endl;
    std::cout << "size of data: " << sizeof(data)/sizeof(data[0]) << std::endl;

    for (size_t i = 0; i < sizeof(data)/sizeof(data[0]); i++)
    {
       std::cout << data[i] << std::endl;
    }

    // auto looping

    for (auto dat : data)
    {
        std::cout << "dat = " << dat << std::endl;
    }
    
    

}