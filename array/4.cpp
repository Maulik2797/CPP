#include <iostream>
using namespace std;
int main()
{
  int a[10];
    int temp, i, j;
    for (i = 0; i < 10; i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"\nSorting ";
    for (i =0; i <10; i++)
    {
        cout<<a[i]<<" ";
    }
}