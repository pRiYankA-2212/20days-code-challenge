//print the n factorial of given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
        printf("factorial is %d and factor is %d\n",i,product);
    }

}