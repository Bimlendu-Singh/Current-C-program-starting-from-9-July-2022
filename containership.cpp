#include<iostream>
#include<stdio.h>
// #include<string>
using namespace std;

class Address
{
    //char Name[20];
    char Naam[20];
    // string Fame;
    char landmark[20],street[20],pin[10],district[20],state[20];

    public:
           void inAddress()
           {
             cout<<"\nEnter person Name, landmark, street, pin, district and state respectively"<<endl;
             cin>>Naam;           
             cin>>landmark>>street>>pin>>district>>state;
             
           }

           void showAddress()
           {
             cout<<"\nPerson name is : "<<Naam<<endl;          
             cout<<"Address is : "<<landmark<<" , "<<street<<" , "<<pin<<" , "<<district<<" , "<<state;
             
           }

};

class Employ
{
  int code;
  char position[20];
  Address obj;
  public:
    
    void inEmploy()
    {
        cout<<"\nEnter employ code and his/her position in company "<<endl;
        cin>>code>>position;
        obj.inAddress();
    }

    void showEmploy()
    {
        cout<<"\nEmploy code is : "<<code<<" and person is "<<position;
        obj.showAddress();
    }
};

int main()
{
    Employ ob;
    ob.inEmploy();
    ob.showEmploy();
}