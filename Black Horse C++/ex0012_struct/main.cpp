#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

int main()
{
    struct Student s1;
    s1.name = "Tom";
    s1.age = 12;
    s1.score = 80.0;

    cout << "Student name: " << s1.name << endl;
    cout << "Student age: " << s1.age << endl;

    s1.score = 100.0;

    cout << "Student score: " << s1.score << endl;

    return 0;
}
