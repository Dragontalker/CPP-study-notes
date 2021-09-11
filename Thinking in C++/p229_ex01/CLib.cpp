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

int add(CStash* s, const void* element) {
    if(s->next >= s->quantity) //Enough space left?
        inflate(s, increment);
    // Copy element into storage;
    // starting at next empty space;
    int startBytes = s->next * s->size;
    unsigned char* e = (unsigned char*)element;
    for(int i = 0; i < s->size; i++)
        s->storage[startBytes + i] = e[i];
    s->next++;
    return (s->next - 1); // Index number
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
