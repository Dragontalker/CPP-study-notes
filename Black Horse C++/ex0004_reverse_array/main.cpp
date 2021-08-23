#include <iostream>

#define N 5

using namespace std;

int main()
{
    int arr[N] = {1, 3, 2, 5, 4};

    int temp[N];

    for (int i = 0; i < N; i++)
    {
        temp[i] = arr[N - i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < N; i++)
    {
        cout << temp[i] << endl;
    }

    return 0;
}
