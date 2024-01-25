#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
    int age;
    int mobile_no;
    string address;

public:
    void input()
    {
        cout << "Enter id:" << endl;
        cin >> id;
        cout << "Name:" << endl;
        cin >> name;
        cout << "Age:" << endl;
        cin >> age;
        cout << "Mobile No:" << endl;
        cin >> mobile_no;
        cout << "Address:" << endl;
        cin >> address;
    }
    void showdata()
    {
        cout << "Your Id : " << id << endl;
        cout << "Your Name : " << name << endl;
        cout << "Your Age : " << age << endl;
        cout << "Your Mobile No : " << mobile_no << endl;
        cout << "Your Address : " << address << endl<<endl;
    }
};
int main()
{
    Student a, b, c, d, e;

    a.input();
    a.showdata();

    b.input();
    b.showdata();

    c.input();
    c.showdata();

    d.input();
    d.showdata();

    e.input();
    e.showdata();
}