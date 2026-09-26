#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobileNumber;
    float balance;

public:
    void accept()
    {
        cout << "Enter mobile number: ";
        cin >> mobileNumber;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void recharge(float amount)
    {
        balance = balance + amount;
        cout << "Recharge successful.\n";
    }

    void deductBalance(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Balance deducted successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "\n--- Mobile Account Details ---\n";
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.accept();
    m.display();

    m.recharge(200);
    m.display();

    m.deductBalance(50);
    m.display();

    return 0;
}