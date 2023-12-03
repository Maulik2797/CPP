#include<iostream>
using namespace std;
int main()
{
    int i,j,k=5,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<< k++ <<"\t";
		}
		k=n-i;
		cout <<"\n";
    }
}
/*
5
4       5
3       4       5
2       3       4       5
1       2       3       4       5*/