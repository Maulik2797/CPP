#include <iostream>
using namespace std;
class base
{
//protected:
    int a;

public:
    void input()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
    }
    void output()
    {
        cout << " a = " << a << endl;
    }
};
class base1 // inherit from base class
{
//protected:
    int b;

public:
    void input1()
    {
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void output1()
    {
        cout << " b = " << b << endl;
    }
};
class base2  // inherit from base1 class
{
//protected:
    int c;

public:
    void input2()
    {
        cout << "Enter the value of c : " << endl;
        cin >> c;
    }
    void output2()
    {
        cout << " c = " << c << endl;
    }
};
class base3  // inherit from base2 class
{
//protected:
    int d;

public:
    void input3()
    {
        cout << "Enter the value of d : " << endl;
        cin >> d;
    }
    void output3()
    {
        cout << " d = " << d << endl;
    }
};
class base4 : public base, public base1, public base2,public base3
{
//protected:
    int e;

public:
    void input4()
    {
        cout << "Enter the value of e : " << endl;
        cin >> e;
    }
    void output4()
    {
        cout << " e = " << e << endl;
    }
};
int main()
{
    base4 s;
    s.input();
    s.output();

    // base1 b;
    s.input1();
    s.output1();

    // base2 c;
    s.input2();
    s.output2();

    // base3 d;
    s.input3();
    s.output3();

    s.input4();
    s.output4();
}