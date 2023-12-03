#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    ((a % 3 == 0) && (a % 5 == 0) && (a % 7 == 0)) ? cout << "a is devide by 3,5 and 7" : cout << "a is not devide by 3,5 and 7";
}