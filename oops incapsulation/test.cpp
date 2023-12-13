#include <iostream>
using namespace std;
class test
{
    int testcode, nocandidate, CenterReqd, calcnt;
    char discription[100];
    int calcntr()
    {
        return (nocandidate / 100 + 1);
    }

public:
    void schedule()
    {
        cout << "Enter the testcode " << endl;
        cin >> testcode;
        cout << "Enter the discription " << endl;
        cin >> discription;
        cout << "Enter the NoCandidate " << endl;
        cin >> nocandidate;
        cout << "Enter the CenterReqd " << endl;
        cin >> CenterReqd;
        calcnt = calcntr();
    }

    void disptest()
    {
        cout << "Testcode is = " << testcode << endl;
        cout << "Enter the discription " << discription << endl;
        cout << "No Candidate is = " << nocandidate << endl;
        cout << "CenterReqd is = " << CenterReqd << endl;
        cout << "calcnt is = " << calcnt << endl;
    }
};
int main()
{
    test t;
    t.schedule();
    t.disptest();
}