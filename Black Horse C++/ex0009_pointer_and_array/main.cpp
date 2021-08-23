#include <iostream>

#define N 10

using namespace std;

int main() {

    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* ptr = arr;

    cout << "The first element in arr = " << *(ptr) << endl;
    cout << "The second element in arr = " << *(ptr + 1) << endl;
    cout << "The last element in arr = " << *(ptr + N - 1) << endl;

    for (int i = 0; i < N; i++) {
        cout << *(ptr) << endl;
        ptr++;
    }

    return 0;
}
