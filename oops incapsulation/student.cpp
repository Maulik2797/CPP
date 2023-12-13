#include <iostream>
using namespace std;
class student
{
    int adminno;
    char sname[20];
    float sci, maths, eng, total;
    float ctotal()
    {
        return maths + eng + sci;
    }

public:
    void takedata()
    {
        cout << "Enter the adminno = " << endl;
        cin >> adminno;
        cout << "Enter the name = " << endl;
        cin >> sname;
        cout << "Enter the sci marks = " << endl;
        cin >> sci;
        cout << "Enter the maths marks = " << endl;
        cin >> maths;
        cout << "Enter the eng marks = " << endl;
        cin >> eng;

        total = ctotal();
    }

    void showdata()
    {
        cout << "Admin no is = " << adminno << endl;
        cout << "Name is = " << sname << endl;
        cout << "Sci marks = " << sci << endl;
        cout << "maths marks is = " << maths << endl;
        cout << "Eng marks is = " << eng << endl;
        cout << "Total is = " << total << endl;
    }
};

int main()
{
    student s;
    s.takedata();
    s.showdata();
    return 0;
}