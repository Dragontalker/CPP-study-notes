#include <iostream>

#define N 5
#define w_1 300
#define w_2 350
#define w_3 200
#define w_4 400
#define w_5 250

using namespace std;

int main()
{
    int arr[N] = {w_1, w_2, w_3, w_4, w_5};

    int w_max = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > w_max)
        {
            w_max = arr[i];
        }
    }

    cout << "The maximum weight = " << w_max << "lbs." << endl;

    return 0;
}
