#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 string name ;
 int unit ;
 float bill;
 cout<<"Enrter Name";
 cin>>name;
 cout<<"Enter unit:";
 cin>>unit;
 if(unit<=0)
 {
cout<<"Invalid credintial:";
return 0;
 }
else if(unit<=100)
{
    bill=5*unit;
}
else if(unit<=200)
{
    bill=7*200;
}
else if(unit<=300)
{
    bill=10*unit;
}
else
{
    bill=12*unit;
}
cout<<"Customer deatils:"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"unit:"<<unit<<endl;
cout<<"Bill:"<<bill;
return 0;
}