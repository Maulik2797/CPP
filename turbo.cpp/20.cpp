#include <iostream>
using namespace std;
int main()
{
    int income, tax;

    cout<<"Enter your income";
    cin>>income;
    if (income <= 2500)
    {
        cout<<"your payable tax is = 0 ";
    }
    else if (income > 2500 && income <= 5000)
    {
        tax = (income * 0.1);
        cout<<"your payable tax is ="<<tax;
    }
    else if (income > 5000 && income <= 10000)
    {
        tax = (income * 0.2);
        cout<<"your payable tax is ="<<tax;
    }
    else
    {
        tax = (income * 0.3);
        cout<<"Your payable tax is ="<<tax;
    }
}