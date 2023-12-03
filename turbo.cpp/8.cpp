#include <iostream>
using namespace std;
int main()
{
   int principal,time,rate,ci,i,a;
    cout<<"Enter the Principal "<<"\n";
    cin>>principal;
    cout<<"Enter the time"<<"\n";
    cin>>time;
    cout<<"Enter the rate for interest"<<"\n";
    cin>>rate;
    i = (principal*time*rate)/100;
    a = principal*(1+rate/36)*(36*time);
    ci = a-principal;
    cout<<"Your interest is a %d\n",i;
    cout<<"Your compound interest is a %d\n",ci;
   
}