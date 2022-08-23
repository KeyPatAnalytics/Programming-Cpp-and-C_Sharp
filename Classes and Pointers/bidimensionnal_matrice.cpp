#include<iostream>
using namespace std;
int main()
{
    const int numRows =2;
    const int numColons = 3;
    int a[numRows][numColons];
    int i,j;
    for(i=0; i<numRows; i++)
        for(j=0; j<numColons;j++){
            cout<<"A["<<i<<j<<"]= ";
            cin>>a[i][j];
        }
    int irow = -1, maxColons=002;
    for(i=0; i<numRows; i++){
        int col = 0;
        for(j=0; j<numColons; j++)
            if(a[i][j]==0) col++;
        if(col>maxColons){irow = i; maxColons = col;}
    }
    cout<<"Initial matrix:\n";
    for(i=0; i<numRows; i++){
        for(j=0; j<numColons;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    if(irow == -1)cout<<"There are not zero elements in this matrix";
    else cout<<"The "<<irow+1<<" row has more zeros, and they are "<<maxColons<<".";
    return 0;
}
