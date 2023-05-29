#include <iostream>
#include <cmath>

int main(){
    int score[10];

    //Write data into an array

    for (size_t i {0}; i < 10; i++)
    {
        score[i] = pow(i + 1, 2);
        std::cout << "scores [" << i + 1 << "]: " << score[i] << std::endl;
    }

     for (int val : score)
    {
        std::cout << "scores [i]: " << val << std::endl;
    }

     //Write data into an array

    // for (size_t i {0}; i <= 2; i++)
    // {
    //     std::cout << "scores [" << i << "]: " << score[i] << std::endl;
    // }
    
    
}