#include <bits/stdc++.h>
using namespace std;

// Base class
class Human
{
public:
    string name;
    int age;
};

// Derived class 1 (hierarchical)
class Student : public Human
{
public:
    int rollno;
    int fees;
    void displayStudent()
    {
        cout << "Student: " << name << ", Age: " << age
             << ", RollNo: " << rollno
             << ", Fees: " << fees << endl;
    }
};

// Derived class 2 (hierarchical)
class Teacher : public Human
{
public:
    int empId;
    int salary;
    void displayTeacher()
    {
        cout << "Teacher: " << name << ", Age: " << age
             << ", EmpID: " << empId
             << ", Salary: " << salary << endl;
    }
};

// Hybrid: ResearchScholar inherits from BOTH Student and Teacher
class ResearchScholar : public Student, public Teacher
{
public:
    string topic;
    void displayScholar()
    {
        cout << "Research Scholar: " << Student::name // disambiguation
             << ", Age: " << Student::age
             << ", RollNo: " << rollno
             << ", Fees: " << fees
             << ", EmpID: " << empId
             << ", Salary: " << salary
             << ", Topic: " << topic << endl;
    }
};

int main()
{
    Student s;
    s.name = "Nashville";
    s.age = 20;
    s.rollno = 34;
    s.fees = 10000;
    s.displayStudent();

    Teacher t;
    t.name = "George";
    t.age = 45;
    t.empId = 101;
    t.salary = 50000;
    t.displayTeacher();

    ResearchScholar rs;
    // Need to set both Student and Teacher parts separately
    rs.Student::name = "Rohan";
    rs.Student::age = 30;
    rs.rollno = 202;
    rs.fees = 15000;
    rs.Teacher::empId = 501;
    rs.Teacher::salary = 60000;
    rs.topic = "Artificial Intelligence";
    rs.displayScholar();

    return 0;
}
