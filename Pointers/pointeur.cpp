#include<stdio.h>
#include<string.h>
int main()
{ char q[80],*start,*p;
    int count=0;
    puts("Input the sentence: ");
    gets(q);
    start=q;
    while(1)
    {
        p=strstr(start,"Vacia");
        if(p==NULL)break;
        count++;
        start=p+4;
    }
    printf("The noun 'Vacia' is written %d times",count);
return 1;
}
