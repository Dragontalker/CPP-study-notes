#include <iostream>

int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    int a = 10;
    int b = 10;

    std::cout << "The address of local variable a = "
              << (int)&a << std::endl;

    std::cout << "The address of local variable b = "
              << (int)&b << std::endl;

    std::cout << "The address of local variable g_a = "
              << (int)&g_a << std::endl;

    std::cout << "The address of local variable g_b = "
              << (int)&g_b << std::endl;

    static int s_a = 10;
    static int s_b = 10;

    std::cout << "The address of local variable s_a = "
              << (int)&s_a << std::endl;

    std::cout << "The address of local variable s_b = "
              << (int)&s_b << std::endl;

    std::cout << "The address of string literal = "
              << (int)&"hello world" << std::endl;


    std::cout << "The address of local variable c_g_a = "
              << (int)&c_g_a << std::endl;

    std::cout << "The address of local variable c_g_b = "
              << (int)&c_g_b << std::endl;

    const int c_l_a = 10;
    const int c_l_b = 10;

    std::cout << "The address of local variable c_l_a = "
              << (int)&c_l_a << std::endl;

    std::cout << "The address of local variable c_l_b = "
              << (int)&c_l_b << std::endl;

    return 0;
}
