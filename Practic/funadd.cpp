#include <iostream>
using namespace std;
class add
{
    public:
    int a,b;
    public:

 void addition(int a,int b)
 {
   cout<<"Addition:"<<a+b<<endl;
 }
 void addition(float a,float b)
 {
   cout<<"Addition:"<<a+b<<endl;
 }
 void addition(int a,int b,int c)
 {
    cout<<"addition:"<<a+b+c<<endl;

 }
};

int main()
{
    add a1;
    a1.addition(3,5);
    a1.addition(3.6,8,1);
    a1.addition(2,5,6);
    return 0;

}

