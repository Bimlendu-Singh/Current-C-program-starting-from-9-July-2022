#include<iostream>
using namespace std;

struct Student
{
    int data;
    struct Student *next ;
}*first=NULL;

void create(int arr[], int n)
{
    int i;
    struct Student *last,*t;
    first = (struct Student*)malloc(sizeof(struct Student));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t = (struct Student*)malloc(sizeof(struct Student));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Student *p)
{
    while(p!=NULL)
    {
      printf("%d\n", p->data);
      p = p->next;
    }
}

int main()
{
  int arr[5] = {1,2,3,4,5};

  create(arr,5);

  /*printf("first node data is %d \n",first->data);
  printf("2nd node data is %d \n",(first->next)->data);
  
  //INteresting observation below , if u want to access 3rd element of linked list directly, u can write like given below 
  printf("3rd node data is %d \n",((first->next)->next)->data);*/ 
  display(first);
  printf("Enter any number to finish : ");
  int a;
  scanf("%d",&a);

}