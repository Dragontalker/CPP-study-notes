//: C08:SafeConst.cpp
// Using const for safety
#include <iostream>
using namespace std;

const int i = 100;          // Typical constant
const int j = i + 10;       // Vlaue from const expr
long address = (long)&j;    // Forces storage
char buf[j + 10];           // Still a const expression

int main() {
    cout << "type a character & CR:";
    const char c = cin.get(); // Can't change
    const char c2 = c + 'a';
    cout << c2;
}
