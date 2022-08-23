//111-Cherkasova-Valeria
#include <stdio.h>

//#include "fun_max_min_word_len.h"

int poisk_min_len(char *str);
int poisk_max_len(char *str);
int poisk_chastot (int word_len, char *str);
void calc_freq(const char *a);


void calc_freq(const char *a)
{
    int k[128] = { 0 };
    int n = 0;
    for (int i = 0; a[i] != '\0'; ++i) {
        int c = a[i];
        ++k[c];
        ++n;
    }
    for (int i = 0; i < 128; ++i) {
        if (k[i] != 0) {
            printf("[%c] -> %lf\n", i, 100.0 * k[i] / n);
        }
    }
}

int poisk_chastot (int word_len, char *str)

{
    int i = 0;
    int word_len_now = 0; 
    int chastota = 0;

    while(str[i] != '\0')
    {
        while (str[i] != ' ' && str[i] != '\0')
        {
            word_len_now++;
            i++;
        }
        if (word_len == word_len_now){
            chastota = chastota + 1;
        }
        if(str[i]!='\0')
            i++;
  
        word_len_now = 0;
     }
     return chastota;
}

int poisk_chastot(char*str)

{
    int i = 0;
    int word_len = 0; 
    int max_len = 0;
//    int max_world_start = 0;
    int chastota = 0;

    while(str[i] != '\0')

    {
        while (str[i] != ' ' && str[i] != '\0')
        {
            word_len++;
            i++;
        }
        if (max_len < word_len)
        {
            max_len = word_len;
        //    max_word_start=i-word_len;
            chastota = 1;
        } else if(max_len == word_len){
            chastota = chastota + 1;
        }
        if(str[i]!='\0')
            i++;
  
        word_len=0;
     }
     return chastota;
}

int main(){
	return 0;
}

