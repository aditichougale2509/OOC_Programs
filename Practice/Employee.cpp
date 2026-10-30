#include<iostream>
#include<string.h>
using namespace std; 
class Employee
{
 public:
    int emp_id;
    string emp_name;
    float dep_basic_sal;

 public:
    void Accept_deatils()
    {
        cout<<"Enter Emp id,name, and salary:"<<endl;
        cin>>emp_id>>emp_name>>dep_basic_sal;
    }
    void Display()
    {
        cout<<"emp id"<<emp_id<<endl;
        cout<<"emp_name"<<emp_name<<endl;
        cout<<"dep_basic_sal"<<dep_basic_sal<<endl;
    }
    void Annual_sal()
    {
        cout<<"Annual_sal:"<<12*dep_basic_sal<<endl;
    }
};

int main()
{
    Employee e1;
    e1.Accept_deatils();
    e1.Display();
    e1.Annual_sal();
    return 0;

}
