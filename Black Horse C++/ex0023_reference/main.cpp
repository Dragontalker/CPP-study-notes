#include <iostream>

int main()
{
    int a = 10;

    int &b = a;

    std::cout << "a = " << a << std::endl;

    b =  20;

    std::cout << "a = " << a << std::endl;

    a = 100;

    std::cout << "b = " << b << std::endl;

    return 0;
}
