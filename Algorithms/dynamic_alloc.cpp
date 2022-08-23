#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *A= (int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++) A[i]=i+1;
    // free(A); A=NULL;
    int *B= (int*)realloc(A, 2*n*sizeof(int));
    for(int i=0; i<2*n; i++) printf("%d ",A[i]);
    return 1;
}
