#include<iostream>
#include<locale.h>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    cout<<"Rty"<<endl;

    float x = 8, y = 4;
    int  z =9;
    cout<<"Size of float= "<<sizeof(float)<<endl;
    cout<<"Size of x = "<<sizeof x<<endl;
    cout<<"The quotient of the division of z by x = "<<z/x<<endl;
    //
    z = z >> 2;
    cout<<"z= "<<z<<"\n";
    //
    int Max,a= 4, b=12;
    Max = (a>b)? a:b ;
    cout<<"Max = "<<Max<<endl;
    int j=2,i =10;
    i = (i<Max)? i+1:Max-1;
    cout<<"The new value of i = "<<i<<endl;
    j *= a+i;
    cout<<"j= "<<j<<endl;
    getch();

    return 0;
}
