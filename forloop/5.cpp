#include<iostream>
using namespace std;
int main()
{
   int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{ 
			cout<<"* ";
		}
		cout<<"\n";
	}
		for(i=4;i>=1;i--)
	    {
			for(j=5;j>=i;j--)
			{
				cout<<" ";
			}
			for(k=1;k<=i;k++)
			{
				
			cout<<"* ";
			}
			cout<<"\n";
		}
}