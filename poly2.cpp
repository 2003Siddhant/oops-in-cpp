#include <bits/stdc++.h>
using namespace std;

class Compx
{
    int real, imag;

public:
    Compx(int r, int i)
    {
        this->real = r;
        this->imag = i;
    }

    Compx()
    {
    }

    void display()
    {
        cout << real << " +i" << imag << endl;
    }

    Compx operator+(Compx &c)
    {
        Compx ans;
        ans.real = real + c.real;
        ans.imag = imag + c.imag;
        return ans;
    }
};
int main()
{
    Compx c1(2, 3), c2(4, 5);
    Compx c3 = c1 + c2;
    c3.display();
}