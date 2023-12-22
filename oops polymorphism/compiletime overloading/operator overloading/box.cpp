// operters overioading
#include <iostream>
using namespace std;
class Box
{
    int l, b, h;

public:
    int volume()
    {
        return l * b * h;
    }
    void setdata(int p, int q, int r)
    {
        l = p, b = q, h = r;
    }
    Box operator+(Box &n)
    {
        Box t;
        t.l = l + n.l;
        t.b = b + n.b;
        t.h = h + n.h;
        return t;
    }
    Box operator++(int)
    {
        Box t;
        t.l = ++l;
        t.b = ++b;
        t.h = ++h;
        return t;
    }
};
int main()
{
    Box a, b, c, d;
    a.setdata(2, 2, 2);
    cout << "volume of Box A is: " << a.volume() << endl;

    b.setdata(3, 3, 3);
    cout << "volume of Box B is: " << b.volume() << endl;

    c = a + b; // (5,5,5)
    cout << "volume of Box C is: " << c.volume() << endl;

    d = c++;
    cout << "volume of Box D is: " << d.volume() << endl;
}