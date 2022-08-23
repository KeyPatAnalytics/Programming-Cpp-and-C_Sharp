#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

Node* GetNewNode(int x)
{
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
 void InsertAtHead(int x)
 {
     Node* temp = GetNewNode(x);

     if(head == NULL)
     {
         head = temp;
         return;
     }
     head->prev = temp;
     temp->next = head;
     head = temp;
 }
void Print()
{
    Node* temp = head;
    printf("Forward: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void ReversePrint()
{
    Node* temp = head;
    printf("Reverse: ");

    while(temp != NULL)
    {temp = temp->next;}

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}
int main()
{
    InsertAtHead(2);
    InsertAtHead(5);
    InsertAtHead(7);
    InsertAtHead(13);
    Print();
    ReversePrint();
    return 1;
}
