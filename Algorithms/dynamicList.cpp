#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    node* next;
};
node* head;
void Insert(int x)
{
    node* temp = new node;
    temp->data = x;


    head = temp;
}
void Print()
{
    node* temp = head;
    printf("This List is: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    int n,x;
    printf("How many numbers you want to enter? ");
    scanf("%d",&n);printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
  return 0;
}
