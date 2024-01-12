//Wap to print reverse of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enetr the number =");
    scanf("%d",&n);
    
    while(n!=0){
        int ld=n%10;
        n=n/10;
    printf(" %d",ld);
    }
}