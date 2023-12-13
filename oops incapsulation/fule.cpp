#include <iostream>
using namespace std;
class flight
{
    int fno, catfule;
    char destination[100];
    float distance, fule;

    int calfule()
    {
        if (distance <= 1000)
        {
            fule = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fule = 1100;
        }
        else
        {
            fule = 2200;
        }
    }

public:
    void feedinfo()
    {
        cout << "Enter the flight number ";
        cin >> fno;
        cout << "Enter the Destination ";
        cin >> destination;
        cout << "Enter the distance ";
        cin >> distance;
        catfule = calfule();
    }

    void showinfo()
    {
        cout << "Flight number is = " << fno << endl;
        cout << "destination is = " << destination << endl;
        cout << "Flight distance is = " << distance << endl;
        cout << "fule consuption is = " << fule << endl;
    }
};
int main()
{
    flight f;
    f.feedinfo();
    f.showinfo();
}