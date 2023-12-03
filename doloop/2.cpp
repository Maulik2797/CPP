#include<iostream>
using namespace std;
int main()
{
  	int i=1,j,k;
	do
	{
		j=1;
			do
			{
				cout<<" ";
				j++;
            }
			while(j<=i);
		k=5;
			do
			{
				cout<<"*";
				k--;
			}
			while(k>=i);
			cout<<"\n";
			i++;
	}
	while(i<=5);
}