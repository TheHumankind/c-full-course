#include <iostream>
#include <iomanip>

int main(){
    float num_01 {1.12232323232323232323232f}; // 7 digits
    double num_02 {1.12122313123123123123123213}; // 15 digits
    long double num_03 {1.1212231312312312312312321L}; // > double

    std::cout << "size of float: " << sizeof(float) << std::endl; // 4 bytes
    std::cout << "size of float: " << sizeof(double) << std::endl; // 8 bytes
    std::cout << "size of float: " << sizeof(long double) << std::endl; // 12 bytes


    std::cout << std::setprecision(20); // count of numbers after dot
    std::cout << "num 1: " << num_01 << std::endl;
    std::cout << "num 2: " << num_02 << std::endl;
    std::cout << "num 3: " << num_03 << std::endl;
}