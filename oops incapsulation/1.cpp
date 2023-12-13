#include <iostream>
using namespace std;
class test
{

    int a;

public:
    void hello()
    {
        a = 1025;
        cout << "Hello World" << endl;
        cout << a;
    }
};
int main()
{
    test t;
    t.hello();
}
