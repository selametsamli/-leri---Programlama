#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_string(char*);

int main (){

    char string[100];
    printf("Yazi Giriniz:\n");
    gets(string);

    sort_string(string);
    printf("%s\n",string);

    return 0;
}

void sort_string(char *s){

    int c,d =0, boyut;
    char *pointer, *sonuc,ch;

    boyut = strlen(s);
    sonuc = (char*)malloc(boyut+1);
    pointer = s;

    for( ch = 'a' ; ch<= 'z';ch++){

        for(c = 0 ;c < boyut; c++){
            if(*pointer ==ch){
                *(sonuc+d) = *pointer;
                d++;
            }
            pointer++;
        }
        pointer = s;
    }

    *(sonuc+d) = '\0';
    strcpy(s,sonuc);
    free(sonuc);
}