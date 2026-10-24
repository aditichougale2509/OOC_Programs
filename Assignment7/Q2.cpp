#include <iostream>
using namespace std;

class Employee {
public:
    int empID;
    string empName, department;

    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployee() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nDepartment: " << department;
    }
};

int main() {
    Employee e;

    e.getEmployee();
    e.displayEmployee();

    return 0;
}