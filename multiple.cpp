#include <bits/stdc++.h>
using namespace std;

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "i am special in " << specialization << endl;
    }
};
class youtuber
{
public:
    int subscribers;

    void content()
    {
        cout << "you have this count: " << subscribers << endl;
    }
};

class teacher : public Engineer, public youtuber
{
public:
    string name;

    teacher(string n, int s, string spc)
    {
        this->name = n;
        this->specialization = spc;
        this->subscribers = s;
    }

    void details()
    {
        cout << "my name is " << name << endl;
        work();
        content();
    }
};
int main()
{
    teacher t("raman", 78999, "finance");
    t.details();
}