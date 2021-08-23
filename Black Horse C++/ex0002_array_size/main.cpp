#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "The size of arr = " << sizeof(arr)
         << " bytes." << endl;

    cout << "The size of arr[0] = " <<  sizeof(arr[0])
         << " bytes." << endl;

    return 0;
}
