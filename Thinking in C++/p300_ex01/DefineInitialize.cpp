//: C06:DefineInitialize.cpp
// Defining variables anywhere
#include <iostream>
#include <string>
using namespace std;

class G {
    int i;
public:
    G(int ii);
};

G::G(int ii) { i = ii; }

int main() {
    cout << "intialization value? ";
    int retval = 0;
    cin >> retval;
    int y = retval + 3;
    G g(y);
}
