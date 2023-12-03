#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the year :";
    cin>>a;
	if(a%4==0)
	{
	    cout <<"This year is leap year.";
	}
	else
	{
	     cout <<"This year is not leap year.";
	}
}