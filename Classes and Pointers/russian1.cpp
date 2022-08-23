#include<stdio.h>
int main()
{
    int num;cout<<"Enter a positive number: ";
    cin>>num;
    int half = num/2;
    int div = 1;
    while(div<=half){
        if(!(num%div))cout<<div<<"\n";
        div++;
    }
    cout<<num<<endl;
    return 1;
}
