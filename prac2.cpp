#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,arr[3][3];

    cout<<"Enter 9 elements in the array";
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
      cin>>arr[i][j];

    cout<<"So the Matrix is";

    for(i=0;i<3;i++)
    {
     cout<<"\n";
     for(j=0;j<3;j++)
      {
          cout<<"\t"<<arr[i][j];
      }
    }
    getch();
   
    return 0;
}