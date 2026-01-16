#include <bits/stdc++.h>
using namespace std;

/*
traditionally it should have print barks but it printed hu hu. its because
-> p is a pointer which points to animal value. now with help og new keyword dog object is being created and its address is allocated to p but here object creation is done in runtime as we are using new kw. in last line p calls speak. as p is currently pointing to animal at compile time it decides that it will call the speak function of animal in compile time only.

if we want speak of dog to be called then we use virtual kw.
virtual func is a member func in base class that you expect to override in derived classes. Declaring it with the keyword virtual ensures that the function call is resolved at runtime

we need pointers because we cant hardcode which classes we are using. suppose whwn werre calling we must know the name of our driend to whom were calling.
with help of pointers we can directly make a call to our frined without knowing which friend to call as we dont care
*/
class animal
{
public:
    virtual void speak()
    {
        cout << "hu hu" << endl;
    }
};
class dog : public animal
{
public:
    void speak()
    {
        cout << "dog barks" << endl;
    }
};
int main()
{
    animal *p;
    p = new dog();
    p->speak();
}