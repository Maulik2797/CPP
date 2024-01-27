#include <iostream>
using namespace std;
class base1
{
    int a, b, c;

public:
    void input()
    {
        cout << "Enter A or B " << endl;
        cin >> a >> b;
    }
    void output()
    {
        c = a + b;
        cout << "Sum Is = " << c << endl;
    }
};
class base2
{
    int a, b, c;

public:
    void input1()
    {
        cout << "Enter A or B " << endl;
        cin >> a >> b;
    }
    void output1()
    {
        c = a - b;
        cout << "Substrection Is = " << c << endl;
    }
};

class base3
{
    int a, b, c;

public:
    void input2()
    {
        cout << "Enter A or B " << endl;
        cin >> a >> b;
    }
    void output2()
    {
        c = a * b;
        cout << "Multiplication Is = " << c << endl;
    }
};

class base4:public base1,public base2,public base3
{
    int a, b, c;

public:
    void input3()
    {
        cout << "Enter A or B " << endl;
        cin >> a >> b;
    }
    void output3()
    {
        c = a / b;
        cout << "Division Is = " << c << endl;
    }
};
int main()
{
    base4 a;
    a.input();
    a.output();

    a.input1();
    a.output1();

    a.input2();
    a.output2();

    a.input3();
    a.output3();
}