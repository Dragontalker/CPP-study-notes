#include <iostream>

#define PI 3.1415926

class Circle
{
public:

    double m_r;

    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    Circle c1;
    c1.m_r = 10;

    std::cout << "The raius of our circle = "
              << c1.calculateZC() << std::endl;

    return 0;
}
