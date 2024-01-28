#include<iostream>
using namespace std;
class volume
{
    int a,b;
    public:
    volume()
    {
        cout << "Welcome...." << endl;
    }
    volume(int x,int y)
    {
        cout << "volume of cylinder = " << 3.14*(a*a)*b << endl;
    }
    volume(int x, double y)
    {
        cout << "volume of cone = " << 0.33*3.14*(a*a)*b << endl;
    }
    volume(double x,double y)
    {
       cout << "volume of  pyramid = " << 0.33*(x*y) << endl;
    }
    volume(double x , int y)
    {
        cout << "volume of prism = " << x*y << endl;
    }
    volume(int x)
    {
        cout << "volume of cube = " << x*x*x << endl;
    }
    volume(double x)
    {
        cout << "volume of sphere = " << 1.33*(3.14*(x*x*x)) << endl;
    }
    volume(char x)
    {
        int a=int(x);
        cout << "volume of hemisphere = " << 0.67*(3.14*(a*a*a)) << endl;
    }
    volume(int x,int y,int z)
    {
        cout << "volume of cuboid = " << x*y*z << endl;
 
    }
};
int main()
{
    volume v,v1(5.1,5.1),v2(5,6.8),v3(9,8),v4(9.1,10),v7(10),v8(5.8),v6(5,9,2);
}