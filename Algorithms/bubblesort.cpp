#include<stdio.h>
#include<stdlib.h>
int compare(int a,int b)
{
    if(a>b)return -1;
    return 1;
}
void bubblesort(int* A, int n, int (*compare)(int ,int))
{
    int i,j,temp;
    for(i=0; i<n; i++)
        for(j=0; j<n-1-i;j++)
            if(compare(A[j],A[j+1])>0)
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
}
int main()
{
    int A[12]={6,5,4,3,2,1,-4,13,-15,47,7,0};
    bubblesort(A,12,compare);
    for(int i=0;i<12;i++)printf("%d ",A[i]);
    return 1;
}
