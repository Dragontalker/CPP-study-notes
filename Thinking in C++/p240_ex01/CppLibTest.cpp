//: C04:CppLibTest.cpp
//{L} CppLib
// Test for C++ library
#include "CppLib.h"
#include "../require.h"
#include "<fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    Stash intStash;
    intStash.initializa(sizeof(int));
    for(int i = 0; i < 100; i++)
        intStash.add(&i);
}
