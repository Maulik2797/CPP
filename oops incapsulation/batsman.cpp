#include <iostream>
using namespace std;
class batsman
{
    int bcode;
    char bname[20];
    int innings, notout, runs, batavg;

    float calcavg()
    {
        return (runs / (innings - notout));
    }

public:
    void readdata()
    {
        cout << "Enter the batsman Code " << endl;
        cin >> bcode;
        cout << "Enter the batsman anme" << endl;
        cin >> bname;
        cout << "Enter the batsman innings " << endl;
        cin >> innings;
        cout << "Enetr the batsman not out " << endl;
        cin >> notout;
        cout << "Enter the batsman runs " << endl;
        cin >> runs;

        batavg = calcavg();
    }
    void displaydata()
    {
        cout << "Batsman code = " << bcode << endl;
        cout << "Batsman Name = " << bname << endl;
        cout << "Batsman innings = " << innings << endl;
        cout << "Batsman notout = " << notout << endl;
        cout << "Batsman runs = " << runs << endl;
        cout << "Batsman batting average = " << batavg << endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}