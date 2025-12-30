#include <bits/stdc++.h>
using namespace std;

// Base class
class Human
{
public:
    string name;
    int age, rollno;
};

// Derived class 1
class Student : public Human
{
public:
    int fees;
    void display()
    {
        cout << "Student details: "
             << name << " age: " << age
             << " rollno: " << rollno
             << " fees: " << fees << endl;
    }
};

// Derived class 2
class Teacher : public Human
{
public:
    int salary;
    void display()
    {
        cout << "Teacher details: "
             << name << " age: " << age
             << " rollno: " << rollno
             << " salary: " << salary << endl;
    }
};

// Derived class 3
class Staff : public Human
{
public:
    string department;
    void display()
    {
        cout << "Staff details: "
             << name << " age: " << age
             << " rollno: " << rollno
             << " department: " << department << endl;
    }
};

int main()
{
    Student s;
    s.name = "Nashville";
    s.age = 20;
    s.rollno = 34;
    s.fees = 10000;
    s.display();

    Teacher t;
    t.name = "George";
    t.age = 45;
    t.rollno = 101;
    t.salary = 50000;
    t.display();

    Staff st;
    st.name = "Rohan";
    st.age = 30;
    st.rollno = 202;
    st.department = "Library";
    st.display();

    return 0;
}
