// operters overioading
#include <iostream>
using namespace std;
class box
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

    box operator*(box &n)
    {
        box t;
        t.l = l * n.l;
        t.b = b * n.b;
        t.h = h * n.h;
        return t;
    }
    box operator++(int)
    {
        box t;
        t.l = l + 1;
        t.b = b + 1;
        t.h = h + 1;
        return t;
    }
};
int main()
{
    box a, b, c, d;
    a.setdata(3, 3, 3);
    cout << "Volume of a is :" << a.volume() << endl;
    b.setdata(4, 4, 4);
    cout << "Volume of b is :" << b.volume() << endl;

    c = a * b;
    cout << "Volume of c is :" << c.volume() << endl;

    d = c++;
    cout << "Volume of d is :" << d.volume() << endl;
   
}