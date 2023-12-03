#include <iostream>
using namespace std;
int main()
{
		int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the array " <<i <<" "<<j<<" ";
			cin>>arr[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr[i][j] <<" ";
		}
		cout<<"\n";
	}
}