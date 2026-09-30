#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    // Overloading unary - operator
    void operator-()
    {
        feet--;
        inch--;

        cout << "Feet & Inches (Decrement): "
             << feet << "'" << inch << endl;
    }

     void operator+()
    {
        feet=feet+3;
        inch=inch+3;

        cout << "Feet & Inches (Decrement): "
             << feet << "'" << inch << endl;
    }
};

int main()
{
    Distance d1(8, 9);
   int a=10,b=20,c;
   c=a+b;
   cout<<"Valu of C:"<<c<<endl;
  cout<<"the valu of feet and inch"<<d1.feet<<d1.inch<<endl;;
    // Calling overloaded unary - operator
    -d1;
    Distance d2(10,20);
    +d2;

    return 0;
}
