#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k=5,n=5;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			cout << k <<"\t";
			k++;
			j++;
		}
		cout<<"\n";
		k=n-i;
		i++;
	}
}