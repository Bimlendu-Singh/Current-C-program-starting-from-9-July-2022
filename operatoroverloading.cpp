#include<iostream>
using namespace std;

class Rectangle
{
    int l,b;

    public:
           Rectangle()
           {}

           Rectangle(int ll, int bb)
           {
                l=ll;
                b=bb;
           }

           Rectangle operator = (Rectangle &r)
           {
               l=r.l;
               b=r.b;
               return Rectangle(l,b);
               /*Rectangle temp;
               temp.l=r.l;
               temp.b=r.b;
               return (temp);*/
           }

           void show()
           {
               cout<<"\nlength is :"<<l;
               cout<<"\nbreadth is :"<<b;
           }
};

int main()
{
  Rectangle r1(20,10);
  Rectangle r2;

  r1.show();
  r2.show();
  r2=r1;
  r2.show();
}



