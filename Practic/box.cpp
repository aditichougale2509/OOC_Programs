#include <iostream>
using namespace std;
 class Box
 {
    public:
    int height,width,length;
    public:
    Box()
    {
        height=1;
        width=1;
        length=1;
        cout<<"Defuatlt constructor";
    }
    Box(int a,int b,int c)
    {
      height=a;
        width=b;
        length=c;

    }
    Box(Box &b)
    {
         height=b.height;
        width=b.width;
        length=b.length;
    }
    void Display()
    {
        cout<<"Volum:"<<height*width*length;
    }

    ~Box()
    {
        cout<<"Distructor called:"<<endl;
    }

 };

 int main()
 {
    Box b1;
   b1.Display();

   Box b2(2,3,4);
   b2.Display();

   Box b3(b2);
   b2.Display();
   return 0;
 }
