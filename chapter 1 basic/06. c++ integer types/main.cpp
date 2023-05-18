#include <iostream>

int main() {
    int count_01;
    int count_02 {};
    int count_03 {10};
    int count_04 {15};
    int count_05 (2.5);

    int counted { count_03 + count_04 };

    std::cout << "counted val = " << counted << std::endl;
    std::cout << "count_05 val = " << count_05 << std::endl;

    return 0;
}