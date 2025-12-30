#include <bits/stdc++.h>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        cout << "base class constructor" << endl;
    }
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class student : public Human
{
private:
    int roll, fees;

public:
    student()
    {
        cout << "derived class constructor" << endl;
    }
    student(string n, int a, int r, int f) : Human(n, a)
    {
        this->roll = r;
        this->fees = f;
    }

    void display()
    {
        cout << name << " " << age << " " << fees << " " << roll << endl;
    }
};

int main()
{
    student s("tim", 324, 54, 4654);
    s.display();
}