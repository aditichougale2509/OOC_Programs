#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    char ch;
    int lines = 0, words = 0, characters = 0;
    bool inWord = false;

    if (!file)
    {
        cout << "File not found!";
        return 0;
    }

    while (file.get(ch))
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = false;
        else if (!inWord)
        {
            words++;
            inWord = true;
        }
    }

    file.close();

    cout << "Number of Lines: " << lines << endl;
    cout << "Number of Words: " << words << endl;
    cout << "Number of Characters: " << characters << endl;

    return 0;
}