#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    node* next;
};

node* InsertAtBeginning(node* head,int x)
{
    node* temp = new node; //for the first method
    temp->data = x;
    temp->next = NULL;
    if(head != NULL) temp->next = head;
    head = temp; //It is for the first method
    return head;
}
void InsertAtEnd(node** head,int x)
{
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;
    if((*head)==NULL)(*head) = temp;
    else{
    node* temp1 = new node;
    temp1->next = (*head);
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    }

}

void Print(node* head)
{
   // node* temp = head; for the first method
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
    node* head=NULL;
    int n,x;
    printf("How many numbers you want to enter? ");
    scanf("%d",&n);printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&x);
        InsertAtEnd(&head,x);
    }
    Print(head);
  return 0;
}
