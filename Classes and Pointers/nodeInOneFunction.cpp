#include<iostream>
using namespace std;

struct Node{
    int d;
    Node* prev;
    Node* next;
};
Node* beginning = NULL;
void addNode(Node** pend, int d1){
    Node* pv = new Node;
    pv->d = d1;
    pv->next = 0;
    if(*pend == 0){
        beginning = pv;
        pv->prev = 0;
        *pend = pv;
    }
    else{
    pv->prev = *pend;
    (*pend)->next = pv;
    pv->prev = pv;
    *pend = pv;
    }
}

int main()
{
    Node* End = 0;
    for(int i =1; i<10; i++)addNode(&End,i);
    Node* pv = beginning;

    do{
       cout<<pv->d<<" ";
        pv = pv->next;
    }while(pv != NULL);

return 0;
}


