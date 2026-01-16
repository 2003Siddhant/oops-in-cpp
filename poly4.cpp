#include <bits/stdc++.h>
using namespace std;
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

    animal a;
    dog d;

    p = &a;
    p->speak();

    p = &d;
    p->speak();
}