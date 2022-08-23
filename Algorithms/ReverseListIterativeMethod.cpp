
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
void Reverse()
{
    node *current, *previous, *next;
    current = head;
    previous = NULL;
    while(current!=0){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
    }
    head = previous;
    }
int main(){
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(8);
    Insert(6);
    Print();
    Reverse();
    Print();
    return 1;
}
