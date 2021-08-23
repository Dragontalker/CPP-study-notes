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
    struct Student s1 = {"Tom", 18, 100.0};

    struct Student* ptr = &s1;

    cout << "Student's name using pointer = " << ptr->age << endl;
    cout << "Student's age using pointer = " << ptr->age << endl;
    cout << "Student's score using pointer = " << ptr->score << endl;

    return 0;
}
