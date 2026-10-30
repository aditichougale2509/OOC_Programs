#include <iostream>
#include <string>
using namespace std;
int main()
{
 int n,loast;
 cout<<"enter the no frame :"<<endl;
 cin>>n;
 cout<<"Enetr the loast frame "<<endl;
 cin>>loast;
 for (int i=1;i<=n;i++){

    cout<<"Sending frame:"<<i<<endl;
    if(i==loast)
    {

        cout<<"Frame"<< i << "loast"<<endl;
        cout<<"Ack not tecived.timeout"<<endl;
        cout<<"retransmitt frames:"<<i<<"successfully"<<endl;

    }
    cout<<"Frame sucessfully recived:"<<i<<endl;
    cout<<"Ack recived sucessfully:"<<endl;
 }

return 0;
}