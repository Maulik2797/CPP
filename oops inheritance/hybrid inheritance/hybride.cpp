#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void input()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
    }
    void output()
    {
        cout << "The value of a : " << a << endl;
    }
};

class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
};

int main()
{
    A ob1;
    ob1.input();
    ob1.output();

    B ob2;
    ob2.input();
    ob2.output();

    C ob3;
    ob3.input();
    ob3.output();

    D ob4;
    ob4.input();
    ob4.output();
}