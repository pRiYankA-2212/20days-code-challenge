//progam to count digits of s given number
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
int count=0;
while (n!=0)
{    
    n=n/10;
    count++;
}
printf("the no of digit are %d ",count);
}