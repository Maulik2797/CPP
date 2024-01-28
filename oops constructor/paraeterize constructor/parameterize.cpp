#include <iostream>
using namespace std;
class text
{
    int a, b;

public:
    text(int x, int y)
    {
        a = x, b = y;
    }
    void show()
    {
        cout << " A is = " << a << endl;
        cout << " B is = " << b << endl;
    }
};
int main()
{
    text ob(10,20);
    ob.show();
}