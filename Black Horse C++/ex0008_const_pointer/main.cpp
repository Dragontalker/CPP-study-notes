#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    const int* p = &a;

    p = &b;

    cout << "The value pointed by ptr = " << *(p) << endl;


    return 0;
}
