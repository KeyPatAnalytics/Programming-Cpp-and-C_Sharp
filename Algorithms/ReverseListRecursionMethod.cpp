#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node* next;
};
node* head;
void Insert(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = head;
    head = temp;
}
void Print1(node* p)
{
    if(p == NULL) {printf("\n");return;}
    printf("%d ",p->data);
    Print1(p->next);
 }

void Print2(node* p)
{
    if(p == NULL) {printf("\n");return;}
    Print2(p->next);
    printf("%d ",p->data);
 }

 void RecursionReverse(node* p)
 {
     if(p->next == NULL)
     {
         head = p;
         return;
     }
     RecursionReverse(p->next);
     node* q = p->next;
     q->next = p;
     p->next = NULL;
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
int main(){
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(8);
    Insert(6);
    Print();
    node* p = head;
    RecursionReverse(p);
    //Print1(p);
    //Print2(p);
    Print();
    return 1;
}
