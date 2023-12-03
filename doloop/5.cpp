#include<iostream>
using namespace std;
int main()
{
  		int i=1,n,sum=0;
	cout<<"Enter the Element:";
	cin>>n;
	do
	{
		if(i%2==1)
		{
			sum=sum+i;
		}i++;
	}
	while(i<=n);
	cout<<sum<<"\t";
}