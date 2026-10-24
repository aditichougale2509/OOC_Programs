#include <iostream>
#include <cmath>
using namespace std;
class Vehical
{
    public:
    virtual void start()=0;
    virtual void stop()=0;

};
class Car : public Vehical 
{ 

    public:
    void start() override {
        cout<<"Car start using key."<<endl;
    }
    void stop() override { 
        cout<<"Car stop using breake."<<endl;
    }
};
class Bike : public Vehical 
{ 

    public:
    void start() override {
        cout<<"Bike start using key."<<endl;
    }
    void stop() override { 
        cout<<"Bike stop using breake."<<endl;
    }
};
int main()
{ 
    Vehical *v;
    Car c;
    Bike b;
    v=&c;
    v->start();
    v->stop();

    v=&b;
    v->start();
    v->stop();
    return 0;
}