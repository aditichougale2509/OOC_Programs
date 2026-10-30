#include <iostream>
using namespace std;

class Student
{
    int rollno;
    char name[20];

public:
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& out, Student& s);
};

istream& operator>>(istream& in, Student& s)
{
    cout << "Enter Roll Number: ";
    in >> s.rollno;

    cout << "Enter Name: ";
    in >> s.name;

    return in;
}

ostream& operator<<(ostream& out, Student& s)
{
    out << "\nStudent Details";
    out << "\nRoll Number: " << s.rollno;
    out << "\nName: " << s.name;

    return out;
}

int main()
{
    Student s;

    cin >> s;
    cout << s;

    return 0;
}