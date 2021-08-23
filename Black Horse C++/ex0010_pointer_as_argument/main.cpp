#include <iostream>

using namespace std;

void swap_01(int, int);

int main()
{
    int a = 10;
    int b = 20;

    swap_01(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

void swap_01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
