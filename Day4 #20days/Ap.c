//print AP 1,3,5,7 up to n term.
#include<stdio.h>
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("AP is :%d\n",i);
    }
}