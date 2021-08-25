#include <iostream>

int main()
{
    int a = 10;
    int b = 10;

    std::cout << "The address of local variable a = "
              << (int)&a << std::endl;

    std::cout << "The address of local variable b = "
              << (int)&b << std::endl;

    return 0;
}
