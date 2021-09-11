//: C04:CLib.cpp {0}
// Implementation of example C-like library
// Declare structure and functions;
#include "CLib.h"
#include <iostream>
#include <cassert>
using namespace std;

// Quantity of elements to add
// when increasing storage;
const int increment = 100;

void initialize(CStash* s, int sz) {
    s->size = sz;
    s->quantity = 0;
    s->storage = 0;
    s->next = 0;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
