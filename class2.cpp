#include <bits/stdc++.h>
using namespace std;

class Customer
{

    string name;
    int account_number, balance;

public:
    Customer()
    {
        cout << "constructor called" << endl;
        cout << "its a default constructor" << endl;
    }
    Customer(string name, int acc_num, int bal)
    {
        this->name = name;
        this->account_number = acc_num;
        this->balance = bal;
    }

    void print()
    {
        cout << "name is: " << name << " and acc_num is: " << account_number << " and balance is: " << balance << endl;
    }

    // inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c)
    // {
    // }
};
int main()
{
    Customer c1;
    Customer c2("brock", 202234, 1000);

    Customer c3(c2); // copy constructor
    c3.print();
    c2.print();
}