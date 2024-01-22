#include<stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int a=65;
        for(int j=1;j<=i;j++){
             char b=(char)a;
            printf("%c",b);

        a++;
        }
        printf("\n");
    }
}