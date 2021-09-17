//: C10:StaticDestructors.cpp
// Static object destructors
#include <iostream>
using namespace std;

class Obj {
    char c; // Identifier
public:
    Obj(char cc) : c(cc) {
        cout << "Obj::Obj() for " << c << endl;
    }
    ~Obj() {
        cout << "Obj::~Obj() for " << c << endl;
    }
};

Obj a('a'); // Global (static storage)
// Constructor & desctructor always called

void f() {
    static Obj b('b');
}

void g() {
    static Obj c('c');
}

int main() {
    cout << "inside main()" << endl;
    f(); // Calls static constructor for b
    // g() not called
    cout << "leaving main()" << endl;
}
