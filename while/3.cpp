#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			cout<<i<<"\t";
			j++;
		}
		cout<<"\n";
		i++;
	}
}