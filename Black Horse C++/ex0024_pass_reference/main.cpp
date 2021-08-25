#include <iostream>

void mySwap01(int, int);

int main()
{
    int a = 10;
    int b = 20;

    mySwap01(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}

void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "In mySwap01, a = " << a << std::endl;
    std::cout << "In mySwap01, b = " << b << std::endl;
}
