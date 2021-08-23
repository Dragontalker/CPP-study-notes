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
    Student arr[3] =
    {
        {
            "ZhangSan",
            18,
            80.0
        },
        {
            "LiSi",
            20,
            95.5
        },
        {
            "WangWu",
            19,
            62.0
        }
    };

    for (int i = 0; i < 3; i++)
    {
        Student tempStu = arr[i];

        cout << "Student #" << i + 1 << endl;
        cout << "Student's name = " << tempStu.name << endl;
        cout << "Student's age = " << tempStu.age << endl;
        cout << "Student's score = " << tempStu.score << endl;

    }

    return 0;
}
