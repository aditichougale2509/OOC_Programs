#include <iostream>
using namespace std;

class Patient
{
    int patientId;
    string name;
    int age;
    float consultationCharge;

public:
    void registerPatient()
    {
        cout << "Enter patient ID: ";
        cin >> patientId;

        cout << "Enter patient name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        consultationCharge = 500;
    }

    void calculateCharge()
    {
        if (age < 12)
            consultationCharge = 300;
        else if (age >= 60)
            consultationCharge = 400;
        else
            consultationCharge = 500;
    }

    void display()
    {
        cout << "\n--- Patient Information ---\n";
        cout << "Patient ID: " << patientId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Consultation Charge: Rs. " << consultationCharge << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharge();
    p.display();

    return 0;
}