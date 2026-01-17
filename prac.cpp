#include <bits/stdc++.h>
using namespace std;

class bank
{
    string name;
    int bal;
    static int cnt;

public:
    bank(string n, int b)
    {
        this->name = n;
        this->bal = b;
        cnt++;
    }
    void show()
    {
        cout << "name is " << name << " bal is " << bal << endl;
    }
    void static disp()
    {
        cout << "cnt is " << cnt << endl;
    }
};
int bank::cnt = 0;
int main()
{
    bank b("sidd", 45000);
    bank c("wrer", 45000);
    b.show();
    bank::disp();
}