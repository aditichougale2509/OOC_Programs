#include<iostream>
#include<string.h>
using namespace std; 
class Product
{
 public:
    int pro_id;
    string Pro_name;
    float unit_price;
    int Quantity;

 public:
    void Accept_deatils()
    {
        cout<<"Enter Product id,name,unit price and Quantity:"<<endl;
        cin>>pro_id>>Pro_name>>unit_price>>Quantity;
    }
    void Display()
    {
        cout<<"pro_id"<<pro_id<<endl;
        cout<<"Pro_name"<<Pro_name<<endl;
        cout<<"unit_price"<<unit_price<<endl;
    }
    void cal_total_cost()
    {
        //cout<<"Enter the total Quantity"<<Quantity<<endl;
        cout<<"Total Cost:"<<unit_price*Quantity<<endl;
    }
};

int main()
{
    Product e1;
    e1.Accept_deatils();
   // e1.cal_total_cost();
    e1.Display();
     e1.cal_total_cost();
    return 0;

}
