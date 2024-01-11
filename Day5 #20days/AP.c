//print the 1,3,,5,7,9...upto n terms (2n-1)
#include<stdio.h>
int main(){
    int n=1;
    scanf("%d",&n);
    // for(int i=1;i<=2*n-1;i=i+2){
    //     printf("AP is %d\n",i);
    // }
    //using extre varible 
    int a=1;
    for(int i=1;i<=n;i++){
        printf("Ap is %d\n",a);
        a=a+2;
    }
}