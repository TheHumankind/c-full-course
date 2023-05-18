#include <iostream>

int main(){
    int val {45};

    std::cout << "(no operator) The val is " << val << std::endl;

    std::cout << std::endl;
    val += 5;
    std::cout << "(+= operator) The val is " << val << std::endl; // 50
    std::cout << std::endl;
    val -= 5;
    std::cout << "(-= operator) The val is " << val << std::endl; // 45 
    std::cout << std::endl;
    val *= 5;
    std::cout << "(*= operator) The val is " << val << std::endl; //225
    std::cout << std::endl;
    val /= 5;
    std::cout << "(/= operator) The val is " << val << std::endl; //45
    std::cout << std::endl;
    val %= 5;
    std::cout << "(%= operator) The val is " << val << std::endl; //0
}