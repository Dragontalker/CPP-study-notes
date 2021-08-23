#include <iostream>

#define N 9

using namespace std;

int main()
{
    int arr[N] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Element #" << i+1 << " = " << arr[i] << endl;
    }

    return 0;
}
