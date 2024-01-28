#include<stdio.h>
 int main(){
    char str[]="Jai shree ram";
    str[10]=82;
    int i=0;
    while (str[i]!='\0')
    {
     printf("%c",str[i]);
     i++;
    }
    return 0;
 }