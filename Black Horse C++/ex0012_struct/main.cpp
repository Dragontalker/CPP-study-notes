#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    student stu;
    stu.name = "Tom";
    stu.age = 12;
    stu.score = 80;

    cout << "Student name: " << stu.name << endl;
    cout << "Student age: " << stu.age << endl;
    cout << "Student score: " << stu.score << endl;

    return 0;
}
