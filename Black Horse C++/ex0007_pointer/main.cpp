#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a;

    cout << "The integer ptr points at = " << *ptr << endl;

    return 0;
}
