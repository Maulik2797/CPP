#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter value of a =" << endl;
        cin >> a;
        cout << "Enter value of b = " << endl;
        cin >> b;

        cout << "A = " << a << " "
             << "B = " << b << endl;
    }
};
class B : public A
{
    int m, n;

public:
    void setdata()
    {
        cout << "Enter value of M =" << endl;
        cin >> m;
        cout << "Enter value of N = " << endl;
        cin >> n;

        cout << "M = " << m << " "
             << "N = " << n << endl;

        getdata();
    }
};
class C: public B
{


};
int main()
{
    C b;
    b.setdata();
}