#include <iostream>
using namespace std;
struct customer
{
    int billno;
    char name[50];
    float totalbill;
};
int main ()
{
    struct customer c1,c2,c3,c4,c5;
    float gst;

   cout<<"Enter The customer billno is =";
   cin>>c1.billno;
   cout<<"The bill no is \n"<<c1.billno;
   cout<<"Enter The customer name is =";
   cin>>c1.name;
   cout<<"The name is \n"<<c1.name;
   cout<<"Enter The customer totalbill is =";
   cin>>c1.totalbill;
   gst = c1.totalbill + c1.totalbill * 0.05;
   cout<<"The totalbill is \n"<<gst;

    cout<<"Enter The customer billno is =";
   cin>>c2.billno;
   cout<<"The bill no is \n"<<c2.billno;
   cout<<"Enter The customer name is =";
   cin>>c2.name;
   cout<<"The name is \n"<<c2.name;
   cout<<"Enter The customer totalbill is =";
   cin>>c2.totalbill;
   gst = c2.totalbill + c2.totalbill * 0.05;
   cout<<"The totalbill is \n"<<gst;

    cout<<"Enter The customer billno is =";
   cin>>c3.billno;
   cout<<"The bill no is \n"<<c3.billno;
   cout<<"Enter The customer name is =";
   cin>>c3.name;
   cout<<"The name is \n"<<c3.name;
   cout<<"Enter The customer totalbill is =";
   cin>>c3.totalbill;
   gst = c3.totalbill + c3.totalbill * 0.05;
   cout<<"The totalbill is \n"<<gst;

    cout<<"Enter The customer billno is =";
   cin>>c4.billno;
   cout<<"The bill no is \n"<<c4.billno;
   cout<<"Enter The customer name is =";
   cin>>c4.name;
   cout<<"The name is \n"<<c4.name;
   cout<<"Enter The customer totalbill is =";
   cin>>c4.totalbill;
   gst = c4.totalbill + c4.totalbill * 0.05;
   cout<<"The totalbill is \n"<<gst;

    cout<<"Enter The customer billno is =";
   cin>>c5.billno;
   cout<<"The bill no is \n"<<c5.billno;
   cout<<"Enter The customer name is =";
   cin>>c5.name;
   cout<<"The name is \n"<<c5.name;
   cout<<"Enter The customer totalbill is =";
   cin>>c5.totalbill;
   gst = c5.totalbill + c5.totalbill * 0.05;
   cout<<"The totalbill is \n"<<gst;



}
