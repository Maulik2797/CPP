#include<iostream>
using namespace std;
int main()
{
  	int i=5,j=5;
	do
	{
		j=1;
		do
		{
			cout<<i<<"\t";
			j++;
		}
		while(j<=5);
		cout<<"\n";
		i--;
	}
	while(i>=1);
}