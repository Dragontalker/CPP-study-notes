#include <iostream>

int* func(void);
void test01(void);

int main()
{
    test01();

    return 0;
}

int* func()
{
    int* p = new int(10);
    return p;
}

void test01()
{
    int* p = func();

    std::cout << *(p) << std::endl;
    std::cout << *(p) << std::endl;
    std::cout << *(p) << std::endl;
    std::cout << *(p) << std::endl;

    delete p;

    std::cout << *(p) << std::endl;
}
