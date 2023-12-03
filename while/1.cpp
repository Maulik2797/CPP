#include<iostream>
using namespace std;
int main()
{
    // print 1,2,4,8,....,n.
	
	int i=1,n;
	cout<<"Enter the Element:";
	cin>>n;
	
	while(i<=n)
	{
		cout<<i<<"\t";
		i*=2;
	}
}