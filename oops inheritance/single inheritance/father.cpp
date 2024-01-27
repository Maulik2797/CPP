#include <iostream>
using namespace std;
class father
{
public:
    string surname = "Vasani";
};

class son : father
{
public:
    void show()
    {
        string name;
        cout << "Enter your son name : " << endl;
        cin >> name;
        cout << name << " " << surname << endl;
    }
};

class daughter : father
{
public:
    void disp()
    {
        string name;
        cout << "Enter your Daughter name : " << endl;
        cin >> name;
        cout << name << " " << surname << endl;
    }
};
class wife : father
{
public:
    string name;

    void out()
    {
        cout << "Enter your wife name : " << endl;
        cin >> name;
        cout << name << " " << surname << endl;
    }
};

int main()
{
    son s;
    s.show();

    daughter d;
    d.disp();

    wife w;
    w.out();
}