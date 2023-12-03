#include <iostream>
using namespace std;
int main()
{	
char str1[6]="Skill",str2[5]="qode",str3[10];
	int i=0,j;

	for(i=0;str1[i]!='\0';i++)
	{
		
		str3[i] = str1[i];
	}
	
	str3[i]=' ';
	//i++;
	//n = strlen(str1);
	for(j=i;str2[j]!='\0';j++)
	{
		
		str3[i]= str2[j];
	}
	
	/*for(i=0;i<10;i++)
	{
		str3[i] = str1[i]+ str2[j];
	}*/
	cout<<"The str3 is "<<str3[i];
	

}