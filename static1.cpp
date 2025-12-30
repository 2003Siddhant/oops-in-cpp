#include <bits/stdc++.h>
using namespace std;

class Customer
{

    string name;
    int acc_num, balance;
    static int cnt;
    static int total_balance;

public:
    Customer(string name, int acc, int bal)
    {
        this->name = name;
        this->acc_num = acc;
        this->balance = bal;
        cnt++;
        total_balance += bal;
    }

    void deposit(int a)
    {
        if (a > 0)
        {
            balance += a;
            total_balance += a;
        }
        else
            return;
    }

    void withdraw(int a)
    {
        if (total_balance > a)
        {
            balance -= a;
            total_balance -= a;
        }
    }
    void display()
    {
        cout << name << " " << acc_num << " " << balance << " " << cnt << endl;
    }

    static void staticdisplay()
    {
        cout << cnt << endl;
        cout << total_balance << endl;
    }
};
int Customer::cnt = 0;
int Customer::total_balance = 0;
int main()
{

    Customer c1("rohan", 2000, 10);
    Customer c2("george", 3400, 70);

    c1.display();
    c2.display();

    Customer c3("sfad", 237, 43879);
    c3.deposit(1000);
    Customer::staticdisplay();
    return 0;
}