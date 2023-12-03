#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a % 3 == 0 && a % 5 == 0)
    {
        cout<<"a is divisible by 3 and 5";
    }
    else
    {
        cout<<"a is not divisible by 3 and 5";
    }
}