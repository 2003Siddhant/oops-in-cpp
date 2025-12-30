#include <bits/stdc++.h>
using namespace std;

class customer
{
private:
    string name;
    int age, balance;

public:
    customer(string n, int a, int b)
    {
        this->name = n;
        this->age = a;
        this->balance = b;
    }

    void deposit(int a)
    {
        if (a > 0)
        {
            balance += a;
        }
    }
    void display()
    {
        cout << name << " " << age << " " << balance << " " << endl;
    }
};
int main()
{
    customer c("max", 10, 50);
    c.deposit(1892);
    c.display();
}