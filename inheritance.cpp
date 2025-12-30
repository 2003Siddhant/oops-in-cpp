#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    string name;
    int age, rollno;
};
class student : public Human
{
    int fees;

public:
    void setfees(int f)
    {
        this->fees = f;
    }

    void display()
    {
        cout << "students details are as: " << name << " age: " << age << " and his fees: " << fees << endl;
    }
};

int main()
{
    student s;
    s.name = "nashville";
    s.age = 59;
    s.rollno = 34;
    s.setfees(100000);
    s.display();
}