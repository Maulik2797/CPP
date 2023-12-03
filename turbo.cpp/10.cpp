#include <iostream>
using namespace std;
int main()
{
    int units, totalbill, finalbill;
    cout<<"Enter the units";
    cin>>units;
    if (units <= 100)
    {
        totalbill = 100 * 0.60;
    }
    else if (units <= 300)
    {
        totalbill = 100 * 0.60 + (units - 100) * 0.80;
    }
    else
    {
        totalbill = (100 * 0.60) + (200 * 0.80) + (units - 300) * 0.90;
    }
    if (totalbill < 50)
    {
        totalbill = 50;
    }
    else if (totalbill > 300)
    {
        totalbill = (totalbill + (totalbill * 0.15));
    }
    cout<<"Your electricity bill is "<< totalbill;
}