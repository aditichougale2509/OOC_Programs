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
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Department: " << department << endl;
    }
};

class TeachingStaff : public Employee {
public:
    string subject, qualification;

    void getTeaching() {
        getEmployee();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeaching() {
        displayEmployee();

        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee {
public:
    string designation;
    int workingHours;

    void getNonTeaching() {
        getEmployee();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeaching() {
        displayEmployee();

        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << endl;
    }
};

int main() {
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "\nEnter Teaching Staff Details:\n";
    t.getTeaching();

    cout << "\nEnter Non-Teaching Staff Details:\n";
    n.getNonTeaching();

    cout << "\n--- Teaching Staff Details ---\n";
    t.displayTeaching();

    cout << "\n--- Non-Teaching Staff Details ---\n";
    n.displayNonTeaching();

    return 0;
}