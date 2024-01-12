#include<stdio.h>
//program to print sum of digit of a given number
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    int sum=0;
    int ld=0;
    while (x!=0)
    {
       int ld=x%10;
       sum=sum+ld;
       x=x/10;
    }
    printf("%d",sum);

}