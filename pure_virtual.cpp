#include <bits/stdc++.h>
using namespace std;

/*
pure virtual funs is basically a VF with no implementation in base class.- It’s declared using = 0 at the end .
- Declaring at least one pure virtual function makes the class abstract — meaning you cannot create objects of that class directly.


*/
class shape
{
public:
    virtual void area() = 0; // pure virtual function
};
class circle : public shape
{
private:
    double radius;

public:
    circle(double r)
    {
        this->radius = r;
    }
    void area() override
    {
        cout << "its area is: " << 3.14 * radius * radius << endl;
    }
};
class rectangle : public shape
{
private:
    double len, wid;

public:
    rectangle(double l, double w)
    {
        this->len = l;
        this->wid = w;
    }
    void area() override
    {
        cout << "its area is: " << len * wid << endl;
    }
};
int main()
{
    shape *s1 = new circle(5);
    shape *s2 = new rectangle(4.5, 8.89);

    s1->area();
    s2->area();
}