#include<iostream>
using namespace std;
class Product
{
public:
    int Product_id;
    string Product_name;
    int Product_qutntity;
    int Product_price;
    int Total_Cost;
public:
  void accept()
  {
  cout<<"Enter the product id ,name,qunatity,and price";
  cin>>Product_id>>Product_name>>Product_qutntity>>Product_price;
  }
  void disp()
  {

   cout<<"Product_id"<<Product_id<<endl;
 cout<<"Product_name"<<Product_name<<endl;
  cout<<"Product_qutntity"<<Product_qutntity<<endl;
   cout<<"Product_price"<<Product_price<<endl;
    

  }
  void calculate()
  {
    cout<<"TotalCost:"<<Product_qutntity*Product_price;
  }
    
};
int main()
{
  Product p1;
  p1.accept();
  p1.disp();
  p1.calculate();
  return 0;

}