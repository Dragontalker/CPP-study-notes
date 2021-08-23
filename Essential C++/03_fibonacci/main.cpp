#include <iostream>
#include <cstdlib>

using namespace std;

int fibon_elem(int);

int main()
{
    int result = fibon_elem(20);

    cout << "The result of 20 = " << result << endl;

    return 0;
}

int fibon_elem(int pos)
{
    if (pos <= 0)
    {
        exit(-1);
    }

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
