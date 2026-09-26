#include <iostream>
using namespace std;

class LibraryBook
{
    string title;
    string author;
    bool issued;

public:
    void accept()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        issued = false;
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully.\n";
        }
        else
        {
            cout << "Book is already issued.\n";
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully.\n";
        }
        else
        {
            cout << "Book was not issued.\n";
        }
    }

    void display()
    {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << (issued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    LibraryBook book;

    book.accept();
    book.display();

    book.issueBook();
    book.display();

    book.returnBook();
    book.display();

    return 0;
}