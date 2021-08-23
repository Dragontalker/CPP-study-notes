#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

void printStudent1(struct Student);
void printStudent2(struct Student*);

int main()
{
    struct Student s1;
    s1.name = "Tom";
    s1.age = 18;
    s1.score = 95.5;

    printStudent1(s1);

    printStudent2(&s1);

    return 0;
}

void printStudent1(struct Student student)
{
    cout << "Name = " << student.name << endl;
    cout << "Age = " << student.age << endl;
    cout << "Score = " << student.score << endl;
}

void printStudent2(struct Student* ptr)
{
    cout << "Name = " << ptr->name << endl;
    cout << "Age = " << ptr->age << endl;
    cout << "Score = " << ptr->score << endl;
}
