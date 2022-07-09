/*7)	 Given	an	number	n.	Find	the	number	of	occurrences	of	n	in	the	array.	
Here	n	=	3	in	the	sample	input	,	11	is	size	of	array	and	occurrence	of	3	is	6	times	in	the	given	array*/
#include<iostream>
using namespace std;

int main()
{
    int m,n,i,count=0;
    cin>>m;
    cin>>n;

    int arr[n];  // array size
    //Input
    for(i=0;i<n;i++)
      cin>>arr[i];

    //Counting the occurence of the given number
    for(i=0;i<n;i++)
    {
         if(arr[i]==m)
            count++;
    }

    cout<<count;
}