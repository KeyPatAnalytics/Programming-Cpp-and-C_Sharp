#include<stdio.h>
#include<stdlib.h>
#define Lim 100

void merge(int *A,int nA,int *B, int nB, int *C){
    int i,j,k;
    i=0; j=0; k=0;
    while(i<nA && j<nB){
        if(A[i]<B[j]){C[k]=A[i]; i++; k++;}
        else {C[k]=B[j]; j++; k++;}
    }
    while(i<nA){C[k]=A[i];i++;k++;}
    while(j<nB){C[k]=B[j];j++;k++;}
}

void mergesort(int *A, int start_index, int end_index){
    int i,mid;

    if(start_index<end_index)
    {
    mid = (start_index+end_index)/2;
    //n=end_index-start_index+1;

    int left[mid-start_index]; int right[end_index-mid+1];

    for(i=start_index;i<mid;i++)left[i-start_index]=A[i];
    for(i=mid;i<=end_index;i++)right[i-mid]=A[i];

    mergesort(left,0,mid-start_index-1);
    mergesort(right,0,end_index-mid);

    merge(left,mid-start_index,right,end_index-mid+1,A);
    }
}

int main()
{
    int nA;//,B[Lim],C[Lim];

    printf("Enter the length of the first array: "); scanf("%d",&nA);

    //printf("Enter the first array: \n");
    int *A = (int*)calloc(nA,sizeof(int));
    for(int i=0; i<nA; i++) A[i]=nA-i;
    /*printf("Enter the length of the second array: ");
    scanf("%d",&nB);
    printf("Enter the second array: \n");
    for(i=0;i<nB;i++){  printf("B[%d]= ",i+1); scanf("%d",&B[i]);}

    merge(A,nA,B,nB,C);
    printf("\n");
    for(i=0;i<nA;i++) {printf("%d ",A[i]);}printf("\n");
    for(i=0;i<nB;i++) {printf("%d ",B[i]);}printf("\n");
    for(i=0;i<nA+nB;i++) {printf("%d ",C[i]);}printf("\n");*/

    mergesort(A,0,nA-1);
    /*mergesort(B,0,nB-1);
    merge(A,nA,B,nB,C);*/
    for(int i=0;i<nA;i++) {printf("%d ",A[i]);}printf("\n");
    //for(i=0;i<nB;i++) {printf("%d ",B[i]);}printf("\n");
    //for(i=0;i<nA+nB;i++) {printf("%d ",C[i]);}printf("\n");

    return 1;

}
