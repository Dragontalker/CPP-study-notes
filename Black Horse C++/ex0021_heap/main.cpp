#include <iostream>

int* func(void);

int main()
{
    int* p = func();

    std::cout << "The value pointed by p = " << *(p) << std::endl;
    std::cout << "The value pointed by p = " << *(p) << std::endl;
    std::cout << "The value pointed by p = " << *(p) << std::endl;
    std::cout << "The value pointed by p = " << *(p) << std::endl;

    free(p);

    std::cout << "The value pointed by p = " << *(p) << std::endl;
    std::cout << "The value pointed by p = " << *(p) << std::endl;
    std::cout << "The value pointed by p = " << *(p) << std::endl;
    std::cout << "The value pointed by p = " << *(p) << std::endl;

    return 0;
}

int* func()
{
    int* ptr = new int(10);
    return ptr;
}
