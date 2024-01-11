//display the Gp 100,50,25....upto n.anth term =ar^n-1.100*1\2
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f\n",a);
        a=a*1/2;
    }

    
}