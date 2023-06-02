#include <iostream>

int main(){
    int num[] {1,2,3,4,5,6,7,8,9,0,10,11,12};


    std::cout << "num : " << num[13] << std::endl;

    num[1212112] = 1000;
    std::cout << "num" << num[13] << std::endl;
}