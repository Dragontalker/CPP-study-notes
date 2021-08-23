#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "The size of arr = " << sizeof(arr)
         << " bytes." << endl;

    cout << "The size of arr[0] = " <<  sizeof(arr[0])
         << " bytes." << endl;

    cout << "The number of elements in arr = "
          << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "The address of arr = " << &arr << endl;

    cout << "The address of first element in arr = "
         << &arr[0] << endl;

    cout << "The address of second element in arr = "
         << &arr[1] << endl;

    return 0;
}
