#include<stdio.h>
void Merge(int *a, int low, int high, int mid){
    int i,j,k,temp[high-low+1];
    i=low; k=0; j=mid+1;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){temp[k]=a[i];i++;k++;}
        else{temp[k]=a[j];j++;k++;}
    }
    while(i<=mid){temp[k]=a[i];i++;k++;}
    while(j<=high){temp[k]=a[j];j++;k++;}
    for(i=low;i<=high;i++)a[i]=temp[i-low];
}
void MergeSort(int *a, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low, high, mid);
    }
}

main(){
    int i,n;
    printf("Enter the the number of elements: "); scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){printf("Element %d: ", i+1); scanf("%d",&A[i]);}
    MergeSort(A,0,n-1);

    for(i=0;i<n;i++){printf("%d ",A[i]);}
    return 1;
}
