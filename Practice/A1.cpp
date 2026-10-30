#include <iostream>
using namespace std; 
class Student 
{
    public :
    int marks;
    char name;
    friend istream& operator>>(istream& in ,Student &s);
    friend ostream& operator<<(ostream& out ,Student &s);

};
istream& operator>>(istream& in ,Student &s)
{
    cout<<"Ennter name;";
    cin>>s.name;
    cout<<"roll no:";
    cin>>s.marks;
    return in;
};
ostream& operator<<(ostream& out ,Student &s)
{
    cout<<"Ennter name;";
    cin>>s.name;
    cout<<"roll no:";
    cin>>s.marks;
    return out;
};
int main()
{
    Student s1;
    cin>>s1;
    cout<<s1;
    return 0;
}