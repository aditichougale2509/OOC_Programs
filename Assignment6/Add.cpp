#include <iostream>
using namespace std;

class Calculator
{
    int a, b, c;
    float d, e;

public:
    void add(int n1, int n2)
    {
        a = n1;
        b = n2;
        cout << "Addition of No1 and No2: " << a + b << endl;
    }

    void add(int n1, int n2, int n3)
    {
        a = n1;
        b = n2;
        c = n3;
        cout << "Addition of Three No: " << a + b + c << endl;
    }

    void add(float n1, float n2)
    {
        d = n1;
        e = n2;
        cout << "Addition of Two float no: " << d + e << endl;
    }
};

int main()
{
    Calculator c1;

    c1.add(25, 10);
    c1.add(25, 10, 20);
    c1.add(2.1f, 2.1f);

    return 0;
}
