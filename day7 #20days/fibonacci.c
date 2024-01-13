//print the n factorial of given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=1,b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
       a=b;
       b=sum;
       if(n==1){
        printf("fibonacci is %d ",n);
       }
        
    printf("%d\n",sum);
    }

}