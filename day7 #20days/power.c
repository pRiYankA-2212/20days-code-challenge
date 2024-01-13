//print the n factorial of given number.
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the base: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&m);
    int power=1;
   for(int i=1;i<=m;i++){
    power=power*n;
   }
 printf("The base is %d and power is %d and answer is %d",n,m,power);
}