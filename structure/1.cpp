#include <iostream>
using namespace std;
struct student
{
    int id;
    char name[50];
    float per;
}s1,s2;
int main()
{
	 struct student s3,s4,s5;
    cout<<"Enter the id of student:\n";
    cin>>s1.id;
    cin>>s2.id;
    cin>>s3.id;
    cin>>s4.id;
    cin>>s5.id;

    cout<<"Enter the name of student:\n";
    cin>>s1.name;
    cin>>s2.name;
    cin>>s3.name;
    cin>>s4.name;
    cin>>s5.name;

    cout<<"Enter the percentage of student:\n";
    cin>>s1.per;
    cin>>s2.per;
    cin>>s3.per;
    cin>>s4.per;
    cin>>s5.per;

    cout<<"The first student id,name or per =\n";
    cout<<"Id is \n"<<s1.id;
    cout<<"nane is \n"<<s1.name;
    cout<<"percentage is \n"<<s1.per;

    cout<<"The second student id,name or per =\n";
    cout<<"Id is \n"<<s2.id;
    cout<<"nane is \n"<<s2.name;
    cout<<"percentage is \n"<<s2.per;

    cout<<"The third student id,name or per =\n";
    cout<<"Id is \n"<<s3.id;
    cout<<"nane is \n"<<s3.name;
    cout<<"percentage is \n"<<s3.per;

    cout<<"The fourth student id,name or per =\n";
    cout<<"Id is \n"<<s4.id;
    cout<<"nane is \n"<<s4.name;
    cout<<"percentage is \n"<<s4.per;

    cout<<"The fifth student id,name or per =\n";
    cout<<"Id is \n"<<s5.id;
    cout<<"nane is \n"<<s5.name;
    cout<<"percentage is \n"<<s5.per;

   
}