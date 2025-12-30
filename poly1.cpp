#include <bits/stdc++.h>
using namespace std;

class area
{
public:
    void calculate(int r)
    {
        cout << 3.14 * r * r << endl;
    }
    void calculate(int l, int b)
    {
        cout << l * b << endl;
    }
};
int main()
{
    area a;
    a.calculate(5);
    a.calculate(5, 4);
}