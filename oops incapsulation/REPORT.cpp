#include <iostream>
using namespace std;
class report
{
    int adno, i, total = 0;

    char name[30];

    float mark[10], avg;

    float getavg()
    {
        return total / 5;
    }

public:
    void readinfo()
    {
        cout << "Enter the admin no :";
        cin >> adno;

        cout << "Enter the admin name :";
        cin >> name;

        for (i = 0; i < 5; i++)
        {
            switch (i)
            {
            case 0:
                cout << "Enter the science marks :";
                break;
            case 1:
                cout << "Enter the maths marks :";
                break;
            case 2:
                cout << "Enter the hindi marks :";
                break;
            case 3:
                cout << "Enter the gujrati marks :";
                break;
            case 4:
                cout << "Enter the english marks :";
                break;
            default:
                cout << "Enter valid value";
                break;
            }

            cin >> mark[i];
            total = total + mark[i];
        }
        avg = getavg();
    }

    void displayinfo()
    {
        cout << endl
             << "Admin no is = " << adno << endl;

        cout << endl
             << "Admin name n is = " << name << endl;

        for (i = 0; i < 5; i++)
        {
            switch (i)
            {
            case 0:
                cout << endl
                     << "scince = ";
                break;
            case 1:
                cout << endl
                     << "maths = ";
                break;
            case 2:
                cout << endl
                     << "hindi = ";
                break;
            case 3:
                cout << endl
                     << "gujrati = ";
                break;
            case 4:
                cout << endl
                     << "engkish = ";
                break;
            }

            cout << mark[i];
        }
        cout << endl
             << "Total marks = " << total;

        cout << endl
             << "Total avgrage = " << avg;
    }
};

int main()
{
    report r;
    r.readinfo();
    r.displayinfo();
}