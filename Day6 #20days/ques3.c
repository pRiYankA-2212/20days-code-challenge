//wAp to print sum of all the even   digit of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int ld=n%10;
        if(ld%2==0){
            printf("%d\n",ld);
            sum=sum+ld;
        }
        n=n/10;
      

    }
    printf("the sum of even number is : %d ",sum);
}