#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    const int* ptr1 = &a;
    ptr1 = &b;

    int* const ptr2 = &a;
    *(ptr2) = 30;

    const int* const ptr3 = &a;

    cout << "The value pointed by ptr1 = " << *(ptr1) << endl;

    cout << "The value pointed by ptr2 = " << *(ptr2) << endl;

    cout << "The value pointed by ptr3 = " << *(ptr3) << endl;

    return 0;
}
