#include <iostream>
using namespace std;
int main()
{
	int num = 11;
	int *ptr = num;
	int **p = ptr;
	int **a = p;

	cout << num << "value of mynum is \n";
	cout << num << "address of mynum is \n";

	cout << ptr << "address of ptr is \n";
	cout << p << "address of p is \n";
	cout << a << "address of a is ";
}