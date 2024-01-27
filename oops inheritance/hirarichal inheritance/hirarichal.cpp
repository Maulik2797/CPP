#include <iostream>
using namespace std;
class base
{
    int a, b, c;

public:
    void input()
    {
        cout << " Enter A and B " << endl;
        cin >> a >> b;
    }
    void output()
    {
        cout << "Sum is = " << a + b << endl;
    }
};
class derive1:public base
{
    int a, b, c;

public:
    void input1()
    {
        cout << " Enter A and B " << endl;
        cin >> a >> b;
    }
    void output1()
    {
        cout << "substraction is = " << a - b << endl;
    }
};
class derive2: public base
{
    int a, b, c;

public:
    void input2()
    {
        cout << " Enter A and B " << endl;
        cin >> a >> b;
    }
    void output2()
    {
        cout << "Multiplication is = " << a * b << endl;
    }
};
int main()
{
    /*base a;
    a.input();
    a.output();*/

    derive1 d1;
    d1.input();
    d1.output();

    d1.input1();
    d1.output1();

    derive2 d2;
    d2.input();
    d2.output();

    d2.input2();
    d2.output2();
}