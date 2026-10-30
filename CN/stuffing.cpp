#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string stuffed = "";
    string data;

    cout << "Enter data" << endl;
    cin >> data;

    for (int i = 0; i < data.length(); i++)
    {
        stuffed += data[i];

        if (data[i] == '1')
        {
            count++;

            if (count == 5)
            {
                stuffed += '0';
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }

    cout << "Data: " << data << endl;
    cout << "Stuffed: " << stuffed << endl;

    return 0;
}