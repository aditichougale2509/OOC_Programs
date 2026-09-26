#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    int marks;

public:
    void get()
    {
        cout << "Enter the name, roll no and marks: ";
        cin >> name >> roll_no >> marks;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll_no: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.get();
    s1.display();

    return 0;
}
