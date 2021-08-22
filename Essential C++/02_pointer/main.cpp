#include <iostream>

using namespace std;

int main()
{
    int ival = 1024;

    int* pi = &ival;

    ival = 256;

    if ( *(pi) != 1024)
    {
        *(pi) = 1024;
    }

    cout << "ival = " << ival << endl;

    return 0;
}
