#include<iostream>
#include<string.h>
using namespace std; 
class complex 
{
 private :
 int real,img;
 public:
 complex()
 {
    real=0;
    img=0;
 }
 complex(int r,int i)
 {
    real=r;
    img=i;
 }
 void input()
 {
    cout<<"Enter real and img:"<<endl;
    cin>>real>>img;
 }
 complex add( complex c)
 {
    return complex(real+c.real,img+c.img);
 }
 complex sub(complex c)
 {
    return complex(real-c.real,img-c.img);
 }
  void display()
  {
    cout<<real<<"+"<<img<<"i"<<endl;
  }
};
int main()
{
    complex c1,c2,c3,c4;
    cout<<"Enter first complex no:"<<endl;
    c1.input();
    cout<<"Enter second Complex no:"<<endl;
    c2.input();

    c3=c1.add(c2);
    c4=c1.sub(c2);

    cout<<"Addition:"<<endl;
    c3.display();
    cout<<"Substractiion"<<endl;
    c4.display();
    return 0;
}