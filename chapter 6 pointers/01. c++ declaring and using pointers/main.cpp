#include <iostream>

int main(){

    int * p_num {};
    double * p_fructional_num {};

    int * p_num1 {nullptr};
    double * p_fructional_num1 {nullptr};

    std::cout << "sizeof(int)" << sizeof(int) << std::endl;
    std::cout << "sizeof(double)" << sizeof(double) << std::endl;
    std::cout << "sizeof(int*)" << sizeof(int*) << std::endl;
    std::cout << "sizeof(double*)" << sizeof(double*) << std::endl;
    std::cout << "sizeof(p_num1)" << sizeof(p_num1) << std::endl;
    std::cout << "sizeof(p_num1)" << sizeof(p_fructional_num1) << std::endl;

    //It doesnt matter if you put the * close to data type or to varible name
    int*  p_num2 {nullptr};
    int * p_num3 {nullptr};
    int  *p_num4 {nullptr};

    int  *p_num5 {nullptr}, int_var{}; // int_var will be int varibale not a pointer (dont do this) 

    int i_var {49};
    int *p_int {&i_var};

    std::cout << "int var : " << i_var << std::endl;
    std::cout << "p_int : " << p_int << std::endl;

    int *p_int1 {nullptr};
    double double_var {33};

    //p_int1 = &double_var compile error

    int *p_int2 {nullptr};
    int i_data {56};
    p_int2 = &i_data;

    std::cout << "val : " << *p_int2 << std::endl;

    return 0;
}