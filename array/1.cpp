#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int i;
	for (i = 0; i <= 4; i++)
	{
		cout << "enter the value of i:";
		cin >> a[i];
	}
	for (i = 0; i <= 4; i++)
	{
		cout << a[i] << "\t";
	}
}