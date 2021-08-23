#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    Student stu;
    stu.name = "Tom";
    stu.age = 12;
    stu.score = 80;

    cout << "Student name: " << stu.name << endl;
    cout << "Student age: " << stu.age << endl;

    stu.score = 100;

    cout << "Student score: " << stu.score << endl;

    return 0;
}
