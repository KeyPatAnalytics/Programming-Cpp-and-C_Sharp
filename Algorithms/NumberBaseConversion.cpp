#include <stdio.h>
#include <math.h>
#include <string>
int main()
{
    char num1[20],num2[20];
    int i,base1,base2,Size,Num_dec,rest;
    printf("Enter the number: "); gets(num1);
    printf("Enter the base of your number: "); scanf("%d",&base1);

    char* p;
    p = num1;
    Size=0;
    while( *p != '\0'){
        Size++;
        p++;
    };


    Num_dec = 0;
   for(i=0; i<Size; i++)
    {
        switch (num1[i])
        {
            case '0': Num_dec += 0;break;
            case '1': Num_dec += pow(base1,Size-i-1);break;
            case '2': Num_dec += 2*pow(base1,Size-1-i);break;
            case '3': Num_dec += 3*pow(base1,Size-i-1);break;
            case '4': Num_dec += 4*pow(base1,Size-i-1);break;
            case '5': Num_dec += 5*pow(base1,Size-i-1);break;
            case '6': Num_dec += 6*pow(base1,Size-i-1);break;
            case '7': Num_dec += 7*pow(base1,Size-i-1);break;
            case '8': Num_dec += 8*pow(base1,Size-i-1);break;
            case '9': Num_dec += 9*pow(base1,Size-i-1);break;
            case 'A': Num_dec += 10*pow(base1,Size-i-1);break;
            case 'B': Num_dec += 11*pow(base1,Size-i-1);break;
            case 'C': Num_dec += 12*pow(base1,Size-i-1);break;
            case 'E': Num_dec += 13*pow(base1,Size-i-1);break;
            case 'D': Num_dec += 14*pow(base1,Size-i-1);break;
            case 'F': Num_dec += 15*pow(base1,Size-i-1);break;
            default: printf("Input error!!\n");
        };
    }
    printf("The decimal equivalent number is: %d\n",Num_dec);
    printf("Enter the new base: "); scanf("%d",&base2);
    i=0;
    do
    {
       rest = Num_dec%base2;
       Num_dec /= base2;
       switch (rest)
       {
        case 0: num2[i]='0';i++;break;
        case 1: num2[i]='1';i++;break;
        case 2: num2[i]='2';i++;break;
        case 3: num2[i]='3';i++;break;
        case 4: num2[i]='4';i++;break;
        case 5: num2[i]='5';i++;break;
        case 6: num2[i]='6';i++;break;
        case 7: num2[i]='7';i++;break;
        case 8: num2[i]='8';i++;break;
        case 9: num2[i]='9';i++;break;
        case 10: num2[i]='A';i++;break;
        case 11: num2[i]='B';i++;break;
        case 12: num2[i]='C';i++;break;
        case 13: num2[i]='D';i++;break;
        case 14: num2[i]='E';i++;break;
        case 15: num2[i]='F';i++;break;
       }
       i++;
    }while(Num_dec>0);

    Size=i; i=0;
    for(i=0;i<Size;i++ )
    {
        printf("%c",num2[Size-1-i]);
    }
    printf("\n");
    return 1;
}
