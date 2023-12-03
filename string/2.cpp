#include <iostream>
using namespace std;
int main()
{	
    char str[15];
	cout<<"Enter the string:\n";
	//scanf("%[^\n]s",str);
	cin>>str;
	cout<<"Your string is:\n"<<str;
	//puts(str);
	int i;
	for(i=0;str[i]!='\0';i++);
	cout<<"\nYour string lenth is : "<<i;

}