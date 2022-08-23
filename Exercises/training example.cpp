#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char hext[100];
	int number = 0;
	int length ;
	 printf("Enter a hexadecimal number: ");
	 scanf("%s",&hext);

	 length = strlen(hext);

	 for(int i=0; i<length; i++){
		 if(hext[length-1-i]>='0' && hext[length-1-i]<='9')
			 number += (hext[length-1-i]-'0')*pow(16,i);
		else
			 number += (hext[length-1-i]-'A'+10)*pow(16,i);
	 }
	 printf("\nYour decimal number is: %d\n",number);

	 char repeat = 'y';
	 printf("Do you want to convert another number? [y/n] ");
	 scanf("%s",&repeat);
	 if(repeat=='y'|| repeat=='Y'){
        main();
	 }
	 if(repeat!='y'){
	 printf("%d",'48');
	 return 1;
	 }

}
