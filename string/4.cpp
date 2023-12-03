#include <iostream>
using namespace std;
int main()
{	
  	char str1[12],str2[10];
	int i,j;
	cout<<"Enter the string 1";
	cin>>str1;
	cout<<"Enter the string 2";
	cin>>str2;

	for(i=0;str2[i]!='\0';i++);
	for(j=0;str1[j]!='\0';j++) 
	{
		str2[i++] = str1[j];
	}
	str1[i] ='\0';
	cout<<"The merged string swap is: \n"<< str2;

}