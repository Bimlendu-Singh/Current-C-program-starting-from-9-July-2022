#include<iostream>
using namespace std;

class student
{
    int sRoll,sClass;                      //Bheem's Code 7/6/21
    char sName[20];

    public:
           void input()
           {
               cout<<"Enter student name,roll and class he/she studiying"<<endl;
               cin>>sName>>sRoll>>sClass;
           }

           void display();
};

void student::display()
{
  cout<<"Student name, roll and class is"<<endl;
  cout<<"\t"<<sName<<"\t"<<sRoll<<"\t"<<sClass;
}

int main()
{
  student details;
  details.input();
  details.display();
}

