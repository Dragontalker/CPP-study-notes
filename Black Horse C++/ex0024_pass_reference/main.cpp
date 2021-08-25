#include <iostream>

void mySwap01(int, int);
void mySwap02(int*, int*);
void mySwap03(int&, int&);

int main()
{
    int a = 10;
    int b = 20;

    mySwap01(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    mySwap02(&a, &b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    mySwap03(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}

void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void mySwap02(int* a, int* b)
{
    int temp = *(a);
    *(a) = *(b);
    *(b) = temp;
}

void mySwap03(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
