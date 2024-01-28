#include<stdio.h>
int main(){
    char arr[5]={'a','b','v','d','r'};
    for(int i=0;i<5;i++){
    printf("%c  ",arr[i]);
    printf("\n");
    printf("%p",&arr[i]);

    }
    return 0;
}