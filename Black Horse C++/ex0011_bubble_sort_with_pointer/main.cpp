#include <iostream>

using namespace std;

void bubbleSort(int*, int);

int main()
{
    cout << "Hello world!" << endl;
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
