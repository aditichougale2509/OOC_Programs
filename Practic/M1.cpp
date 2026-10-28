#include <iostream>
using namespace std;
 
class Mobile
{
    public:
    float balence;
    
 public:
    void recharge()
{
    float amount;
 cout<<"Enter the amount To recahrge:"<<endl;
 cin>>amount;
 balence=amount+balence;
}
void deup()
{
    float amount;
 cout<<"Enter the amount To depute:"<<endl;
  cin>>amount;
 balence=amount-balence;
}
void display()
{
    cout<<"Current ammount:"<<balence;
}
};
int main()
{
    Mobile m1;
    m1.recharge();
    m1.deup();
    m1.display();
    return 0;

}