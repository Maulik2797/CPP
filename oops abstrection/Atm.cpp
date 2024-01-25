#include <iostream>
using namespace std;
class atm
{
    bool monay;
    public:
    void deposit()
    {
        if (monay = true)
        {
            cout << "You Have monay then deposit the money" << endl;
        }
        else
        {
            cout << "You Have no monay then not deposit the money" << endl;
        }
    }

    void withdraw()
    {
        if (monay = true)
        {
            cout << "The money in your accout then you can withdraw the money" << endl;
        }
        else
        {
            cout << "The money is not in your account then you can't withdraw the money" << endl;
        }
    }

    void checkbalence()
    {

        cout << "Enter your pin and check your balance" << endl;
    }
};
int main()
{
    atm a;
    a.checkbalence();
    a.deposit();
    a.withdraw();
    

}