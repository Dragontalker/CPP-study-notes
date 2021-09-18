//: C14:Composition.cpp
// Reuse code with composition
#include "Useful.h"

class Y {
    int i;
    X x; // Embedded object
public:
    Y() { i = 0; }
    void f(int ii) { i = ii; }
    int g() const { return i; }
    void permute() { x.permute(); }
};

int main() {
    Y y;
    y.f(47);
    y.permute(); // Access the embedded object
}
