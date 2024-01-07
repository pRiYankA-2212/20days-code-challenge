//Take positive integer input and tell if it is divisible by 5 or not. 
#include<stdio.h>
int main(){
    int x;
    printf("Enter your number");
    scanf("%d",&x);
    if(x%5==0){
        printf("Number is divisible");
    }
    else{
        printf("Number isn't divisible");
    }
}