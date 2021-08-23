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
    struct Student student = {"Tom", 18, 95.5};
    struct Teacher teacher = {1, "Jack", 53, student};

    cout << "Teacher's name = " << teacher.name << endl;
    cout << "His student's name = " << teacher.student.name << endl;

    return 0;
}
