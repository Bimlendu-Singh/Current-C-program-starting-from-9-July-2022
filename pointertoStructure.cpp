#include<iostream>
using namespace std;

struct Rectangle
{
    int length=10;
    int breadth = 20;
};

int main()
{
   struct Rectangle *p;

   struct Rectangle r;
   p = &r;
   cout<<p->length<<endl;
   cout<<(*p).breadth<<endl;
}