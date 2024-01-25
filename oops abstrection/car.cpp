#include <iostream>
using namespace std;
class car
{
    bool startEngine;

public:
    void start()
    {
        cout << "Push the Start engine button" << endl;
        if (startEngine = true)
        {
            cout << "Start Engine" << endl;
        }
        else
        {
            cout << "Can't start engine" << endl;
        }
    }
    void drive()
    {
        if (startEngine)
        {
            cout << "You can Drive the car" << endl;
        }
        else
        {
            cout << "You can't drive the car" << endl;
        }
    }
};
int main()
{
    car a;
    a.start();
    a.drive();
}