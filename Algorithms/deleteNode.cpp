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
void Delete(int n){
    node* temp1 = head;
    if(n==1){
        head = temp1->next;
        delete[] temp1;
        return;
    }
    for(int i=0;i<n-2; i++)
        temp1=temp1->next;
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete[] temp2;
}
int main(){
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(8);
    Insert(6);
    Print();
    int n;
    printf("Input a position: ");
    scanf("%d",&n);
    Delete(n);
    Print();
return  1;
}
