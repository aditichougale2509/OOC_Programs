#include<iostream>
using namespace std;
class Empolyee
{

    int emp_id;
    string emp_name;
    string dep_name;
    float salary;

public:
   void get()
   {

    cout<<"enter the empolyee id,name,dep.salary";
    cin>>emp_id>>emp_name>>dep_name>>salary;
   }
   void dispaly()
   {
    cout<<"emp_id:"<<emp_id<<endl;
    cout<<"emp_name:"<<emp_name<<endl;
    cout<<"dep_name:"<<dep_name<<endl;
    cout<<"salary:"<<salary<<endl;
   }
};
int main()
{
    Empolyee e1;

    e1.get();
    e1.dispaly();

    return 0;
}
