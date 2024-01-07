//take positive integer input and tell if it is three digit number or not.
#include<stdio.h>
int main(){
    int a;
    printf("Enter your input");
    scanf("%d",&a);
    if(a>99&&a<999){
        printf("it's three digit number");
    }
    else{
        printf("it's not three digit number");
    }
}