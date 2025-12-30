#include <bits/stdc++.h>
using namespace std;

class Customer
{
    int a;

public:
    Customer()
    {
        cout << "customer called" << endl;
    }
    Customer(int a)
    {
        this->a = a;
        cout << "constructor calling is " << a << endl;
    }
    ~Customer()
    {
        cout << "destructor calling " << a << endl;
    }
};
int main()
{
    Customer c1(1), c2(2), c3(3);
}