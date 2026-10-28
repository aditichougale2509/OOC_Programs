#include <iostream>
using namespace std;
class Employee
{ 
    public:
    int Basic_Salary;
    int HRA;
    int DA;
    public :
    void calculateSalary(int a)
    {
        cout<<"Basic_Salary"<<a<<endl;
    }
     void calculateSalary(int a,int b)
     {
        cout<<" Basic Salary and HRA"<<a+b<<endl;
     }
      void calculateSalary(int a,int b,int c)
     {
        cout<<" Basic Salary and HRA and DA"<<a+b+c<<endl;
     }

};
int main()
{
    Employee e1;
    e1.calculateSalary(1);
     e1.calculateSalary(1,7);
      e1.calculateSalary(1,4,6);
      return 0;

}
