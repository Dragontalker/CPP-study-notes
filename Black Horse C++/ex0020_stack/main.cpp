#include <iostream>

int* func(int*);

int main()
{
    int a = 20;

    int* p = func(&a);

    std::cout << "The value at address of p = " << *(p) << std::endl;

    return 0;
}

int* func(int* a)
{
    *(a) = 10;
    return a;
}
