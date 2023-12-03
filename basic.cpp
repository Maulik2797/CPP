/*
    stdio.h   -> iostream
    printf()  -> cout
                 << -> insertion operator
                 :: -> scope recurstion operator 
    scanf()   -> cin
                 >> -> exterction operator             
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<"hello world\n";
    cout << "enter the a:\n";
    cin >> a>>b;
    cout << "a + b = "<< a+b; 
}