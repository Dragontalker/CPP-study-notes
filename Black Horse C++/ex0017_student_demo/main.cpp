#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string sName;
    double score;
};

struct Teacher
{
    string tName;
    struct Student sArray[5];
};

void allocateSpace(struct Teacher[], int);
void printStudent(struct Student);
void printTeacher(struct Teacher);

int main()
{
    struct Teacher tArray[3];

    int len = sizeof(tArray) / sizeof(tArray[0]);

    allocateSpace(tArray, len);

    return 0;
}

void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";

    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0; i < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];

            tArray[i].sArray[j].score = 60;
        }

    }
}


