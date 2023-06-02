#include <iostream>

int main(){
    char mes [] {'H', 'e', 'l', 'l', 'o', '\0'};

    std::cout << "message : " << mes << std::endl;
    std::cout << std::endl;
    char mes2 [] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "--------------------------" << std::endl;
    std::cout << "message2 : " << mes2 << std::endl;
    std::cout << "message2 : " << std::size(mes2) << std::endl;
    char mes3 [] {"Hello"};
    std::cout << "--------------------------" << std::endl;
    std::cout << "message3 : " << mes3 << std::endl;
    std::cout << "message3 : " << std::size(mes3) << std::endl;
}