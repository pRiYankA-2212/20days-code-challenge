#include<stdio.h>
int main(){
 char arr[]="hello world There is print the string in writing the all element ib one line \0";
int i=0;
while (arr[i]!='\0')
{
  printf("%c",arr[i]);
  i++ ; 
}
 return 0;
}