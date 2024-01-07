//take ositive integer input and tell if it is divisible by 5 or 3.
//take positive integer input and tell if it is three digit number or not.
#include<stdio.h>
int main(){
    int a;
    printf("Enter your input");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        printf("it's divisible  number");
    }
    else{
        printf("it's not divisible number");
    }
}