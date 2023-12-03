#include<iostream>
using namespace std;
int main()
{
 	int num1,num2,num3;
	cout<<"Enter the three number";
	cin>>num1>>num2>>num3;
	cout<<"first number is ="<< num1<<"\n";
	cout<<"second number is ="<< num2<<"\n";
	cout<<"third number is ="<< num3<<"\n";
	
	if(num1>num2 && num1>num3)
	{
        cout<<"First number is a gretest.\n";
	}
	if(num2>num1 && num2>num3)
	{
		cout<<"Second number is a gretest.\n";
	}
	if(num3>num1 && num3>num2)
	{
		cout<<"third number is a gretest.\n";
	}
}