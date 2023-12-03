#include<iostream>
using namespace std;
int main()
{
     int i=1;
    while(i<=15)
    {
        if (i==10)
        {
            break;
        }
        cout<<i++ <<"\t";
    }
}