#include<iostream>
using namespace std;
int main()
{
      int i,n ,f = 1;

  cout<<"Enter a number: ";
  cin>>n;

  for (i = 1; i <= n; i++) {
    f *= i;
  }

  cout<<"The factorial of "<<n <<" is " <<f;

}