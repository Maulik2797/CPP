#include <iostream>
using namespace std;
class text
{
public:
    text()
    {
        int a = 100;
        cout << "The A is = " << a << endl;
    }
    ~text()
    {
        cout << "The constructor a is destroyed." << endl;
    }
};

int main()
{
    text x;
}