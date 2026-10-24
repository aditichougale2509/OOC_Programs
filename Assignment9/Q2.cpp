#include <iostream>
using namespace std;

class Employee
{
protected:
    float salary;

public:
    Employee(float s)
    {
        salary = s;
    }

    virtual float calculateBonus() = 0;
};

class Manager : public Employee
{
public:
    Manager(float s) : Employee(s) {}

    float calculateBonus() override
    {
        return salary * 0.20;
    }
};

class Developer : public Employee
{
public:
    Developer(float s) : Employee(s) {}

    float calculateBonus() override
    {
        return salary * 0.10;
    }
};

int main()
{
    Employee *e;

    Manager m(50000);
    Developer d(40000);

    e = &m;
    cout << "Manager Bonus = " << e->calculateBonus() << endl;

    e = &d;
    cout << "Developer Bonus = " << e->calculateBonus() << endl;

    return 0;
}