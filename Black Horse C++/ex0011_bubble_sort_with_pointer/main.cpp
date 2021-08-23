#include <iostream>

#define N 10

using namespace std;

void bubbleSort(int*, int);

int main()
{
    int arr[N] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};

    bubbleSort(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << "element #" << i + 1 << " = " << arr[i] << endl;
    }

    return 0;
}

void bubbleSort(int* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
