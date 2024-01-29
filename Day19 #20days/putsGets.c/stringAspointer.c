//string as a pointer.
#include<stdio.h>
#include<string.h>
int main(){
char str[]="physic wallah";
//this is initilizeation with pointer
/*char* ptr=&str[0];
printf("%p\n",ptr);
printf("%p",&str[0]);*/
char* ptr=str;// ptr now poinrt to str[0]
// to print the string 
int i=0;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
    i++;

}
return 0;

}