//First input kth position to find kth largest or smallest then size of the array then all the elemnts in array to store
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,o,temp;
                                                                                    //Bheem's code 21/9/21
    cin>>o;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
      cin>>arr[i];
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    cout<<o<<"th largest : "<<arr[(n-o)]<<"\n";
    cout<<o<<"th smallest : "<<arr[o-1];

    return 0;
}