#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    int Product_id;
    string Product_name;
    int Product_qut;
    int Product_price;

public:
    void accept()
    {
        cout << "Enter the product id, name, quantity, and price: ";
        cin >> Product_id >> Product_name >> Product_qut >> Product_price;
    }

    void disp()
    {
        cout << "Product_id: " << Product_id << endl;
        cout << "Product_name: " << Product_name << endl;
        cout << "Product_quantity: " << Product_qut << endl;
        cout << "Product_price: " << Product_price << endl;
    }

    void calculate()
    {
      int Total_Cost = Product_qut * Product_price;
        cout << "Total Cost: " << Product_qut * Product_price << endl;
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
