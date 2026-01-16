#include <bits/stdc++.h>
using namespace std;

class bank
{
protected:
    double bal;

public:
    bank(double b) : bal(b) {}
    virtual void deposit(double a) = 0;
    virtual void withdraw(double a) = 0;

    void showBalance()
    {
        cout << "Current balance: " << bal << endl;
    }
};
class savings : public bank
{
public:
    savings(double bal) : bank(bal) {}

    void deposit(double a)
    {
        bal += a;
    }

    void withdraw(double a)
    {
        bal -= a;
    }
};
int main()
{
    bank *a = new savings(25302);
    a->deposit(8739);
    a->withdraw(2937);
    a->showBalance();
}