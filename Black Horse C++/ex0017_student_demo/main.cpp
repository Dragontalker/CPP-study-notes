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
    struct Student sArray[];
};

void allocateSpace(struct Teacher[], int);

int main()
{

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
