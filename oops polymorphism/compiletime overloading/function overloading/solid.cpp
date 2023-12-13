// Function overloading
#include <iostream>
using namespace std;
class solid
{
public:
    void add(int a)
    {
        cout << "area of squre = " << a * a << endl;
    }
    void add(double a, int b)
    {
        cout << "area of rectangle = " << a * b << endl;
    }
    void add(double a)
    {
        cout << "area of circle = " << 3.14 * (a * a) << endl;
    }
    void add(int a, double b)
    {
        cout << "area of triangle = " << 0.5 * (a * b) << endl;
    }
};

int main()
{
    solid s;
    s.add(10);
    s.add(10.0, 10);
    s.add(10.5);
    s.add(10, 10.5);
}
