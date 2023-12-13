#include<iostream>
using namespace std;
class test{

    public:
    test()
    {
        cout<<"default Costroctor is called"<<endl;
    }
    test(int x)
    {
        cout<<"Squre of x is "<<x*x<<endl;
    }
    test(char x)
    {
        cout<<"Character is "<<x<<endl;
    }
    test(int x,int y)
    {

        cout<<"Addition of x and y "<<x+y<<endl;
    }
    
   

};
int main()
{
    test a(5),b(10,20),c('d');
}