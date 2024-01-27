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
        string name = "Maulik ";
        cout << name << surname << endl;
    }
};

class daughter : father
{
public:
    void disp()
    {
        string name = "bhavisha ";
        cout << name << surname << endl;
    }
};
class wife : father
{
public:
    string name = "dakshaben ḥ";

    void out()
    {
        cout << name << surname << endl;
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