#include <bits/stdc++.h>
using namespace std;

/*
- A friend function is a function that is not a member of a class, but it is allowed to access the private and protected members of that class.
- Declared using the keyword friend inside the class.
- Useful when you want an external function (or another class) to work closely with a class’s internals without being a member.

*/
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Declare friend function
    friend Complex addComplex(const Complex &c1, const Complex &c2);

    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};

// Friend function definition
Complex addComplex(const Complex &c1, const Complex &c2)
{
    // Can access private members directly
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main()
{
    Complex c1(2, 3), c2(4, 5);

    Complex c3 = addComplex(c1, c2); // uses friend function
    c3.display();                    // Output: 6 + i8

    return 0;
}
