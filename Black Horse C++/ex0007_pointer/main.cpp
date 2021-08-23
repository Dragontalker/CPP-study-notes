#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int* ptr;
    ptr = &a;

    cout << "The address of a = " << &a << endl;
    cout << "The address stored at ptr = " << ptr << endl;

    cout << "The value of a = " << a << endl;
    cout << "The dereferenced value of ptr = " << *(ptr) << endl;

    return 0;
}
