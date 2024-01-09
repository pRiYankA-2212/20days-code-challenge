//Print the table of n and take n number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter your num");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d\n",i);
    }
}