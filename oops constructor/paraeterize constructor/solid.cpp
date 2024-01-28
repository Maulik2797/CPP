#include <iostream>
using namespace std;
class area
{
public:
    area(int a)
    {
        cout << "area of squre = " << a * a << endl;
    }
    area(int a, int b)
    {
        cout << "area of rectangle = " << a * b << endl;
    }
    area(double a)
    {
        cout << "area of circle = " << 3.14 * (a * a) << endl;
    }
    area(int a, double b)
    {
        cout << "area of triangle = " << 0.5 * (a * b) << endl;
    }
    area(int a, int b, int c)
    {
        cout << "area of rectangle = " << a * b * c << endl;
    }
};
int main()
{
    area a(9), a1(8, 6), a2(8.15), a3(5, 8.19), a4(10, 20, 30);
}