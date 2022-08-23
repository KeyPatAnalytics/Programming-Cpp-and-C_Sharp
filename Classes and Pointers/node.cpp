#include<iostream>
using namespace std;
struct Node{
    int d;
    Node* prev;
    Node* next;
};
Node* first(int d1){
    Node* pv = new Node;
    pv->d = d1;
    pv->prev = 0;
    pv->next = 0;
    return pv;
}
void add(Node** pend, int d1){
    Node* pv = new Node;
    pv->d = d1;
    pv->next = 0;
    pv->prev = (*pend);
    (*pend)->next = pv;
    (*pend) = pv;
}
int main()
{
    Node* firstElt = first(1);
    Node* pend = firstElt;// pend will always point to the last element of the list
    for(int i =2; i<5; i++)add(&pend,i);
    Node* pv = firstElt;
    while(pv){
        cout<<pv->d<<" ";
        pv = pv->next;
    }
    return 1;
}
