#include<iostream>
using namespace std;

int * larger(int* , int* );


int main()
{

/* int a = 10;
 int *p = &a;
 int **p2 = &p;
 
 printf("%d\n",a);
 printf("%d\n",*p);
 printf("%d\n",*&a);  //accessing value of a using astric in address of a

 printf("%u\n",&a);
 printf("%u\n",p);

 printf("%u\n",&p);
 cout<<sizeof(int)<<endl;
 printf("%d\n", sizeof(int));

//Double pointer concept

cout<<a<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;
cout<<*p2<<endl;*/  //it will show value at p that is address of a

//pointer to array concept
/*int arr[5] = {1,2,3,4,5};
int *ptr = arr;

for(int i=0 ; i<5; i++)
{
    printf("%d ", *ptr);
    ptr++;
}

cout<<endl;

for(int i=0 ; i<5; i++)
{
    printf("%d ", ptr);
    ptr++;
}

//printf("%d\n", ptr--);
//printf("%d\n", ptr--);

cout<<*(ptr+3);*/

//Pointer and character strings

/*char *str;
str = "Bheem";

printf("%s \n",str);

char name[] = "Singh";
cout<<name;*/

//Function returning pointer variables

int a=10;
int b=20;

int *p;
p = larger(&a,&b);
cout<<"largest is : "<< *p;




}

int * larger(int* x , int* y)
{
  if(*x>*y)
   return x;

  else 
   return y;
}