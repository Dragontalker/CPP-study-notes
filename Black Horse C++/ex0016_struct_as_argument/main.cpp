#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

void printStudent(struct Student);

int main()
{
    struct Student s1;
    s1.name = "Tom";
    s1.age = 18;
    s1.score = 95.5;

    printStudent(s1);

    return 0;
}

void printStudent(struct Student student)
{
    cout << "Name = " << student.name << endl;
    cout << "Age = " << student.age << endl;
    cout << "Score = " << student.score << endl;
}
