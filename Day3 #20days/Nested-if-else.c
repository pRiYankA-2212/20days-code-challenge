//Take positive input and tell tell if it is divisible by 5 and 3 but not divisible by 15.
#include<stdio.h>
int main(){
    int a;
    printf("Enetr the input ");
    scanf("%d",&a);
    if(a%5==0){
        if(a%3==0){
            printf("Divisible by 3");
        }
            printf("Divisible by 5");
    }
    else{
        printf("no divisible");
    }
}