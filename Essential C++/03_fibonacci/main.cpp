#include <iostream>

using namespace std;

int fibon_elem(int);

int main()
{
    int result = fibon_elem(10);

    cout << "The result of 3 = " << result << endl;

    return 0;
}

int fibon_elem(int pos)
{
    int elem = 1;

    int n_1 = 1;
    int n_2 = 1;

    for (int i = 3; i <= pos; i++)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;
    }

    return elem;
}
