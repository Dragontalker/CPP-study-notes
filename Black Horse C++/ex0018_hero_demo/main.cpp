#include <iostream>
#include <string>

#define N 5

using namespace std;

struct Hero
{
    string name;
    int age;
    string gender;
};

void printHero(struct Hero[], int);
void bubbleSort(struct Hero[], int);

int main()
{
    struct Hero heroArray[N] =
    {
        {"LiuBei", 23, "Male"},
        {"GuanYu", 22, "Male"},
        {"ZhangFei", 20, "Male"},
        {"ZhaoYun", 21, "Male"},
        {"DiaoChan", 19, "Female"}
    };

    cout << "Before bubble sort..." << endl;

    printHero(heroArray, N);

    bubbleSort(heroArray, N);

    cout << "" << endl;

    cout << "After bubble sort..." << endl;

    printHero(heroArray, N);

    return 0;
}

void printHero(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        struct Hero tempHero = heroArray[i];
        cout << "Hero's name = " << tempHero.name
             << ", age = " << tempHero.age
             << ", gender = " << tempHero.gender << endl;
    }
}

void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (heroArray[j].age > heroArray[j + 1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}
