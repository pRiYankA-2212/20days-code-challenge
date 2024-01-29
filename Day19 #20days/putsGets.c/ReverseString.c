#include<stdio.h>
#include<string.h>
int main(){
     char str[50];
     puts("Enter your string ");
     gets(str);
     puts("the size of string is :");
     int size =0;
     int i=0;
     while(str[i]!='\0'){
      size++;
      i++;
     }
    //  puts(size);
    printf("%d",size);
    // loop for reverse the string
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("\n");
    puts("the reverse string is :");
    puts(str);
    return 0;
}