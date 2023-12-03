#include <iostream>
using namespace std;
int myfun() {
    int num;
    
    cout<<"Enter an number : ";
    cin>>num;

    if (num < 0) {
        goto negative;
    }

    if (num % 2 == 1) 
    {
        goto odd;
    }else 
    {
        goto even;
    }

negative:
    cout<<"The number is negative.\n";
    goto end;

even:
    cout<<"The number is even.\n";
    goto end;

odd:
    cout<<"The number is odd.\n";

end:
    return 0;
}
int main()
{
    myfun();
}
