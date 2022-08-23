#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    Node* next;
};
Node* head = NULL;
void InsertAt_nth_position(int data,int n)
{
    Node* temp1 = new Node;
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){temp1->next = head;head = temp1;}
    else{
    Node* temp2 = new Node;
    temp2->next = head;
    for(int i=0;i<n-1;i++)
    {
        temp2=temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
   // delete[] temp2;
    }
    //delete[] temp1;
}
void Print(Node* head)
{
    printf("This List is: ");
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    InsertAt_nth_position(2,1);
    InsertAt_nth_position(5,2);
    InsertAt_nth_position(7,1);
    InsertAt_nth_position(8,3);
    InsertAt_nth_position(-4,4);
    Print(head);
    return 1;
}
