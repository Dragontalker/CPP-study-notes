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

    for (int i = 0; i < N; i++)
    {
        struct Hero tempHero = heroArray[i];
        cout << "Hero's name = " << tempHero.name
             << ", age = " << tempHero.age
             << ", gender = " << tempHero.gender << endl;
    }

    return 0;
}
