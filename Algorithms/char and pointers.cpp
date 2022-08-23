 #include<stdio.h>
 #include<string.h>
 void print(const char *c)
 {
     while(*c != '\0')
     {
         printf("%c",*c);
         c++;
     }
     printf("\n");
 }
 int main()
 {
     char p[10] = "Keyela";
     print(p);
     return 1;
 }
