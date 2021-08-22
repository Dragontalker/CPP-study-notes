#include <iostream>
#include <vector>

#define seq_size 18

using namespace std;

int main()
{
    vector<int> pell_sqp(seq_size);

    pell_sqp[ 0 ] = 1;
    pell_sqp[ 1 ] = 2;

    for ( int ix = 2; ix < seq_size; ++ix)
        pell_sqp[ ix ] = pell_sqp[ ix-2 ] + 2*pell_sqp[ ix - 1];

    cout << "The first " << seq_size
         << " elements of the Pell Series:\n\t";

    for (int ix = 0; ix < seq_size; ++ix)
        cout << pell_sqp[ ix ] << ' ';

    cout << '\n';

    return 0;
}
