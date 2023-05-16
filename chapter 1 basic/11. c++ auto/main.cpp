#include <iostream>

int main() {

    auto var_01 {12};
    auto var_02 {13.0};
    auto var_03 {13.0f};
    auto var_04 {13.0l};
    auto var_05 {'e'};

    // int modifier suffixes

    auto var_06 {123u}; // unsigned
    auto var_07 {123ul}; // unsigned long
    auto var_08 {123ll}; // long long

    std::cout << "var 1 occupies : " << sizeof(var_01) << " bytes " << std::endl;
    std::cout << "var 2 occupies : " << sizeof(var_02) << " bytes " << std::endl;
    std::cout << "var 3 occupies : " << sizeof(var_03) << " bytes " << std::endl;
    std::cout << "var 4 occupies : " << sizeof(var_04) << " bytes " << std::endl;
    std::cout << "var 5 occupies : " << sizeof(var_05) << " bytes " << std::endl;
    std::cout << "var 6 occupies : " << sizeof(var_06) << " bytes " << std::endl;
    std::cout << "var 7 occupies : " << sizeof(var_07) << " bytes " << std::endl;
    std::cout << "var 8 occupies : " << sizeof(var_08) << " bytes " << std::endl;

    return 0;
}