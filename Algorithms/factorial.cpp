#include<stdio.h>
#include<stdlib.h>
int fact(int k){
    if(k<0)return  0;
    if(k==0)return 1;
    if(k>=1)return k*fact(k-1);
}
int main()
{
    int k,n,Arr,Comb; char c;
    printf("Enter the number n and k: "); scanf("%d%d",&n,&k);
    printf("The factorial of n is %d.",fact(n));
    Arr=fact(n)/fact(n-k);
    Comb=fact(n)/fact(k)/fact(n-k);
    printf("If you want the arrangement of k in n then\n enter 'a/A', but if you want the combination of k in n\n then enter'c/C'.\n");

    scanf("%c",&c);
    while((c!='a' && c!='A')&&(c!='c'&&c!='C')){scanf("%c",&c);printf("Enter only c or a"); }
    switch(c)
    {
    case 'a': case 'A':{printf("Arr of k in n equals %d.",Arr);break;}
    case 'c': case 'C':{printf("Comb of k in n is %d.",Comb);break;}
    default: printf("Error\n");
    }

    return 1;
}
