#include<iostream>
#include<string.h>
using namespace std; 
class library
{
    public :
    string title ;
    string author;
    bool issued;
    public:
    void accept()
    {
        cout<<"Enter the title and author";
        cin>>title>>author;
        issued=false;
    }
    void Bookissued()
    {

        if(!issued)
        { 
            issued=true;
            cout<<"Book sussessfully issued"<<endl;
        }
        else{
            cout<<"book is not issued"<<endl;
        }
    }

     void Bookreturn()
    {

        if(issued)
        { 
            issued=false;
            cout<<"Book sussessfull return "<<endl;
        }
        else{
            cout<<"book is not return "<<endl;
        }
    }

    void display()
    {
        cout<<"title"<<title<<endl;
        cout<<"author"<<author<<endl;
       // cout<<"Sts"<<issued ? "issued":"available"<<endl;

    }

};
int main()
{
    library l1;
    l1.accept();
    l1.display();
    l1.Bookissued();
     l1.display();
    l1.Bookreturn();
     l1.display();

}