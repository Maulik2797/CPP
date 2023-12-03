#include <iostream>
using namespace std;
int main()
{
    int Nday, year, month, week, day;

    cin>>Nday;
    // calc year
    year = Nday / 365;
    // calc month
    month = (Nday % 365) / 30;
    // calc week
    week = ((Nday % 365) % 30) / 7;
    // calc days
    day = ((Nday % 365) % 30) % 7;
    cout<<"year "<<year<<"\n";
    cout<<"month "<<month<<"\n";
    cout<<"week "<<week<<"\n";
    cout<<"days "<<day<<"\n";
}