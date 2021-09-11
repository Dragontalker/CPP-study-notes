//: C04:CLib.cpp {0}
// Implementation of example C-like library
// Declare structure and functions;
#include "CLib.h"
#include <fstream>
#include <iostream>
#include <string>
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

void* fetch(CStash* s, int index) {
    // Check index boundaries:
    assert(0 <= index);
    if(index >= s->next)
        return 0;
    // Produce pointer to desired element;
    return &(s->storage[index * s->size]);
}

void inflate(CStash* s, int increase) {
    assert(increase > 0);
    int newQuantity = s->quantity + increase;
    int newBytes = newQuantity * s->size;
    int oldBytes = s->quantity * s->size;
    unsigned char* b = new unsigned char[newBytes];
    for(int i = 0; i < oldBytes; i++)
        b[i] = s->storage[i]; // Copy old to new
    delete [](s->storage); // Old storage
    s->storage = b; // Point to new memory
    s->quantity = newQuantity;
}

void cleanup(CStash* s) {
    if(s->storage != 0) {
        cout << "freeing storage" << endl;
        delete []s->storage;
    }
} ///:~

int main() {
    // Define variables at the beginning
    // of the block, as in C:
    CStash intStash, stringStash;
    int i;
    char* cp;
    ifstream in;
    string line;
    const int bufsize = 80;
    // Now remember to initialize the variables:
    initialize(&intStash, sizeof(int));
    for(i = 0; i < 100; i++)
        add(&intStash, &i);
    for(i = 0; i < count(&intStash); i++)
        cout << "fetch(&intStash, " << i << ") = "
             << *(int*)fetch(&intStash, i)
             << endl;
    // Holds 80-character strings:
    initialize(&stringStash, sizeof(char)*bufsize);
    in.open("CLibTest.cpp");
    assert(in);
    while(getline(in, line))
        add(&stringStash, line.c_str());
    i = 0;
    while((cp = (char*)fetch(&stringStash, i++)) != 0)
        cout << "fetch(&stringStash, " << i << ") = "
             << cp << endl;
    cleanup(&intStash);
    cleanup(&stringStash);
} ///:~
