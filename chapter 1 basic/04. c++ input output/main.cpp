#include <iostream>
#include <string>

int main() {

    //printing data 

    std::cout << "Hello" << std::endl;

    int age;
    std::string name;

    std::cout << "Please type u age and name" << std::endl;

    std::cin >> age;
    // std::cin >> name;
    std::getline(std::cin, name); // если данные содержат пробел
   
    std::cout << "Hello " << name << ". U are " << age;

    return 0;
}