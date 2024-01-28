#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    test(test &ref)
    {
        a = ref.a;
        b = ref.b;
    }
    void text()
    {
        cout << "a is = " << a << "\n"
             << "b is = " << b << endl;
    }
};
int main()
{
    test t(10, 20);
    test t1 = t;
    t.text();
    t1.text();
}