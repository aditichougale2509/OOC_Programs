#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int no1,no2;
    int choice;
    cout<<"Enter the no1& no2";
    cin>>no1>>no2;
    cout<<"1:Add\n 2:sub\n 3:Mul\n 4:div\n 5:mod\n 6:exit"<<endl;
    cout<<"Enter choic:"<<endl;
    cin>>choice;

    switch(choice) 
    {
        case 1:
        
        cout<<"Add:"<<no1+no2;
        break;
        
        case 2:
        
            cout<<"Sub:"<<no1-no2;
            break;
        
        case 3:
        
            cout<<"Mul:"<<no1*no2;
            break;
        
        case 4:
                
                    if (no2!=0)
                    
                        cout<<"div:"<<no1/no2;
                        
                    
                    else
                    
                        cout<<"No2 is zero so no1 is not divisible by 0"<<endl;
                    break;

        
        case 5:
    
               if (no2!=0)
                    
                        cout<<"div:"<<no1%no2; 
                    
                    else
                    
                        cout<<"No2 is zero so no1 is not divisible by 0"<<endl;
                    
                    break;

        
        case 6:
        
            cout<<"Exit";
            break;
        
     deafult:
     cout<<"Invalid choice:"<<endl;

    }  

     return 0;
 }




