#include<iostream>
using namespace std;
class Student 
{ 
    public:
    int marks;

    public:
    Student()
    { 
        marks=90;

    }
    friend void display(Student s);
};
void display(Student s)
{ 
    cout<<"Student Marks:"<<s.marks;
};

int main()
{ 

    Student s;
    display(s);
    return 0;
}