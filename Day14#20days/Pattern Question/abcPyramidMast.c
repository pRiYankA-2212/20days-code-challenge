#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int v=65;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int f=65;
        for(int k=1;k<=i;k++){
            char v=(char)f;
            printf("%c",v);
        f++;
        }
        int a=63+i;
        for(int m=1;m<=i-1;m++){
            int v=(char)a;
            printf("%c",v);
            a--;
        }
       
        printf("\n");
    }
}