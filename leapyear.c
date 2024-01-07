//Find leap year.
#include<stdio.h>
int main(){
    int year;
    printf("enter year");
    scanf("%d",&year);
    if(year%4==0){
        printf("it's a leap year");
    }
    else{
        printf("it's not a leap year");
    }
}