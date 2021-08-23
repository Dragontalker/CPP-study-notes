#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

struct Teacher
{
    string name;
    struct Student stuArray[];
};

int main()
{

    return 0;
}
