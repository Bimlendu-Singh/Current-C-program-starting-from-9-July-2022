#include<iostream>
using namespace std;

int main()
{
    int i,arr[5];

    cout<<"Enter 5 numbers in the given array";
    for(i=0;i<5;i++)
     cin>>arr[i];

    cout<<"Entered numbers in the given array is";
    for(i=0;i<5;i++)
    cout<<"\t"<<arr[i];

}