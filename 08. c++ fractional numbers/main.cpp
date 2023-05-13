#include <iostream>
#include <iomanip>

int main(){
    float num_01 {1.12232323232323232323232f};
    double num_02 {1.12122313123123123123123213};
    long double num_03 {1.1212231312312312312312321L};

    std::cout << "size of float: " << sizeof(float) << std::endl;
    std::cout << "size of float: " << sizeof(double) << std::endl;
    std::cout << "size of float: " << sizeof(long double) << std::endl;


    std::cout << std::setprecision(20);
    std::cout << "num 1: " << num_01 << std::endl;
    std::cout << "num 2: " << num_02 << std::endl;
    std::cout << "num 3: " << num_03 << std::endl;
}