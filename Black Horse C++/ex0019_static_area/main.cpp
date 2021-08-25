#include <iostream>

int g_a = 10;
int g_b = 10;

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

    std::cout << "The address of local variable s_a = "
              << (int)&s_a << std::endl;

    return 0;
}
