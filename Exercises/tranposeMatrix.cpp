#include<stdio.h>

int main(){
    int rows, colons;

    printf("Enter the number of rows and the number colons of your matrix: ");
    scanf("%d%d",&rows,&colons);

    int** a = new int*[rows];
    for(int i=0; i<rows; i++)
        a[i] = new int[colons];

    for(int i=0; i<rows; i++)
        for(int j=0; j<colons; j++)
        a[i][j] = i+j;

    for(int i=0; i<rows; i++){
        printf("\n              ");
        for(int j=0; j<colons; j++)
            printf("%d  ",a[i][j]);
        printf("\n");

    }

    int** b = new int*[colons];
    for(int i=0; i<colons; i++)
        b[i] = new int[rows];   //transposed matrix of a

    for(int j=0; j<colons; j++)
        for(int i=0; i<rows; i++)
            b[j][i] = a[i][j];

    for(int i=0; i<colons; i++){
        printf("\n              ");
        for(int j=0; j<rows; j++)
            printf("%d  ",b[i][j]);
        printf("\n");
    }
    delete[] a; delete[] b;
    return 1;
}
