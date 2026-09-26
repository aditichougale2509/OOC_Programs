#include <iostream>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    float basicSalary, HRA, DA, grossSalary;

public:
    // Constructor
    Employee(int id, string name, float basic, float hra, float da)
    {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    // Calculate gross salary
    void calculateGrossSalary()
    {
        grossSalary = basicSalary + HRA + DA;
    }

    // Display employee details
    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main()
{
    Employee e(101, "Aditi", 25000, 5000, 3000);

    e.calculateGrossSalary();
    e.display();

    return 0;
}