#include <bits/stdc++.h>
using namespace std;

class marks
{
    string name;
    int mk;
    static int tot_marks, cnt;

public:
    marks(string n, int m)
    {
        this->name = n;
        this->mk = m;
        tot_marks += m;
        cnt++;
    }
    void show()
    {
        cout << name << " scored " << mk << endl;
    }

    static double avg()
    {
        if (cnt == 0)
            return 0;
        return (double)tot_marks / cnt;
    }
};
int marks::tot_marks = 0;
int marks::cnt = 0;

int main()
{
    marks m("jskaa", 95);
    marks c("sakfha", 85);

    m.show();
    c.show();
    cout << marks::avg();
}