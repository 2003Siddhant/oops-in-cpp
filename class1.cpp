#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    double weight;
};
int main()
{

    Student s1;
    s1.name = "siddhu";
    s1.age = 23;
    s1.weight = 72.5;

    cout << "the name is: " << s1.name << " and the age is: " << s1.age << " and its weight is: " << s1.weight << endl;

    Student s2;
    s2.name = "roman";
    s2.weight = 98.9;
    cout << "the name is: " << s2.name << " and the age is: " << s1.age << " and its weight is: " << s2.weight << endl;

    cout << "size is " << sizeof(s1) << " and " << sizeof(s2) << endl;
    return 0;
}