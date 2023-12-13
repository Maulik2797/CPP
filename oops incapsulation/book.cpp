#include <iostream>
using namespace std;
class BOOK
{
    int bookno;
    char booktitle[50];
    float price, total, copy;
    float totalcost(int cp_num)
    {
        return cp_num * price;
    }

public:
    void input()
    {
        cout << "Enter the book no = ";
        cin >> bookno;
        cout << "Enter the Booktitle = ";
        cin >> booktitle;
        cout << "Enter the Price = ";
        cin >> price;
    }

    void purchaes()
    {
        cout << "enter the nu of copies = ";
        cin >> copy;
        total = totalcost(copy);
        cout << "total cost of pay you = " << total;
    }
};
int main()
{
    BOOK b;
    b.input();
    b.purchaes();
}