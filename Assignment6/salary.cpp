#include <iostream>
using namespace std;

class Employee
{
public:
    // Salary using Basic Salary only
    float calculateSalary(float basic)
    {
        return basic;
    }

    // Salary using Basic Salary and HRA
    float calculateSalary(float basic, float hra)
    {
        return basic + hra;
    }

    // Salary using Basic Salary, HRA and DA
    float calculateSalary(float basic, float hra, float da)
    {
        return basic + hra + da;
    }
};

int main()
{
    Employee e;

    cout << "Salary using Basic Salary only: "
         << e.calculateSalary(25000) << endl;

    cout << "Salary using Basic Salary and HRA: "
         << e.calculateSalary(25000, 5000) << endl;

    cout << "Salary using Basic Salary, HRA and DA: "
         << e.calculateSalary(25000, 5000, 3000) << endl;

    return 0;
}