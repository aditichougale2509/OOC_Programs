#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        if (result.seconds >= 60)
        {
            result.seconds -= 60;
            result.minutes++;
        }

        if (result.minutes >= 60)
        {
            result.minutes -= 60;
            result.hours++;
        }

        return result;
    }

    Time subtract(Time t)
    {
        Time result;

        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;

        int difference = total1 - total2;

        if (difference < 0)
            difference = -difference;

        result.hours = difference / 3600;
        difference = difference % 3600;

        result.minutes = difference / 60;
        result.seconds = difference % 60;

        return result;
    }

    void display()
    {
        cout << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds" << endl;
    }
};

int main()
{
    Time t1, t2, sum, difference;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "\nEnter second time:\n";
    t2.accept();

    sum = t1.add(t2);
    difference = t1.subtract(t2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    difference.display();

    return 0;
}