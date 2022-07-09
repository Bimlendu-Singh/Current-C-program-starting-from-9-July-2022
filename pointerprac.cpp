#include<iostream>
using namespace std;

struct Home
{
   char homeName[30];
   int homeLength = 20;
   int homeBreadth = 30;
};

void takePointer(int *q)
{
  *q = 11;
}

int main()
{
  
  int i = 10;
  int *p = &i;

  cout<<i<<endl;
  cout<<p<<endl;
  cout<<&i<<endl;
  cout<<*p<<endl;
  cout<<p+2<<endl;

  //Passing variable address to function
  takePointer(&i);
  cout<<i<<endl;

  struct Home h1 ;
  cout<<h1.homeLength<<endl;
  cout<<h1.homeBreadth;
}