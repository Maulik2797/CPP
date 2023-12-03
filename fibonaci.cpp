#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c,n;
	cout<<"Enter the Element:";
	cin>>n;
	cout<<b<<"\t";
	for(i=1;i<n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}

}