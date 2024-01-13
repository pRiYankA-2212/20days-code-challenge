//Wap to print the factorial of given number.#include<stdio.h>
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;

    }
    printf("sum of factorial is =%d",sum);
}