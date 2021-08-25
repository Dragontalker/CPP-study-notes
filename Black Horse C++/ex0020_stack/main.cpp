#include <iostream>

int* func();

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}

int* func()
{
    int a = 10;
    return &a;
}
