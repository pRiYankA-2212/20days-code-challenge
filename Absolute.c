//Take integer input and print the absolute value.
#include<stdio.h>
int main(){
    int a;
    printf("Enter your integer value : ");
    scanf("%d",&a);
    if(a<0){
        printf("%d",a*-1);
    }
    else{
        printf("%d",a);
    }
}