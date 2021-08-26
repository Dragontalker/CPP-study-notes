#include <iostream>

void func(int&);
void func(const int&);

int main()
{
    int a = 10;

    func(a);

    return 0;
}

void func(int& a)
{
    std::cout << "func(int& a) called..." << std::endl;
}

void func(const int& a)
{
    std::cout << "func(const int&a) called..." << std::endl;
}
