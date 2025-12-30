#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "my name is " << name;
    }
};
class employee : public Person
{
protected:
    int salary;

public:
    void monthly_sal()
    {
        cout << "employees monthly salary is " << salary << endl;
    }
};
class manager : public employee
{
public:
    string department;

    manager(string n, int s, string d)
    {
        this->name = n;
        this->salary = s;
        this->department = d;
    }

    void work()
    {
        cout << "i am leading this department " << department << endl;
    }
};
int main()
{
    manager m("sidd", 21781, "finance");
    m.work();
    m.monthly_sal();
    m.introduce();
}