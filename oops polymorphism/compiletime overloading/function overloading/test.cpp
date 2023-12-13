// Function overloading
#include <iostream>

using namespace std;
class test
{
public:
    void add()
    {
        cout << "Add function call....." << endl;
    }
    void add(int a)
    {
        cout << "Squre is a =" << a * a << endl;
    }
    void add(int a, int b) 
    {
        cout << "Addition of a and b =" << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Addition of a,b and c =" << a + b + c << endl;
    }
};
int main()
{
    test a;
    a.add();
    a.add(10);
    a.add(10, 20);
    a.add(10, 20, 30);
    return 0;
}