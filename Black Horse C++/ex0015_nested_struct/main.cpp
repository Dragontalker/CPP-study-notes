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
    int id;
    string name;
    int age;
    struct Student student;
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
