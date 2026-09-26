#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    Fraction add(Fraction f)
    {
        Fraction result;

        result.numerator = numerator * f.denominator
                         + f.numerator * denominator;
        result.denominator = denominator * f.denominator;

        return result;
    }

    Fraction subtract(Fraction f)
    {
        Fraction result;

        result.numerator = numerator * f.denominator
                         - f.numerator * denominator;
        result.denominator = denominator * f.denominator;

        return result;
    }

    void simplify()
    {
        int a = numerator;
        int b = denominator;

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }

        numerator = numerator / a;
        denominator = denominator / a;
    }

    void display()
    {
        simplify();
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, difference;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "\nEnter second fraction:\n";
    f2.accept();

    sum = f1.add(f2);
    difference = f1.subtract(f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    difference.display();

    return 0;
}