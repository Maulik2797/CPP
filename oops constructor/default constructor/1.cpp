#include<iostream>
using namespace std;
class basic{

    int a;
    public:

    basic() // defalut constructor
    {
        cout<<"Defult constroctor is called"<<endl;

    }

    basic(int z) //parammeterized constructor
    {
        a = z;
        cout<<"perameterized constructor is called"<<endl<<"value of z is "<<z<<endl;
    }

};
int main()
{
    basic a,b(45);
}