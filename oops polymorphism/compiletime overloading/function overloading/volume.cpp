// Function overloading
#include <iostream>
using namespace std;
class solid
{
    int a, b;

public:
    void volume()
    {
        cout << "Welcome...." << endl;
    }
    void volume(int x, int y)
    {
        cout << "volume of cylinder = " << 3.14 * (a * a) * b << endl;
    }
    void volume(int x, double y)
    {
        cout << "volume of cone = " << 0.33 * 3.14 * (a * a) * b << endl;
    }
    void volume(double x, double y)
    {
        cout << "volume of  pyramid = " << 0.33 * (x * y) << endl;
    }
    void volume(double x, int y)
    {
        cout << "volume of prism = " << x * y << endl;
    }
    void volume(int x)
    {
        cout << "volume of cube = " << x * x * x << endl;
    }
};
int main()
{
    solid v;
    v.volume();
    v.volume(10, 20);
    v.volume(10, 20.0);
    v.volume(10.5, 20.5);
    v.volume(10.2, 10);
    v.volume(10);
}