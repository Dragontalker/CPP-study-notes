#include <iostream>

int* func(void);
void test01(void);
void test02(void);

int main()
{
    test02();

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

void test02()
{
    int* arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    delete[] arr;
}
