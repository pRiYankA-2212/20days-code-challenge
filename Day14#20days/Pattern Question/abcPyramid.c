//print the Star pyramid
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
        for(int j=1;j<=2*i-1;j++){
            char d=(char)a;
      printf("%c",d);
      a++;
        }
        printf("\n");
    }
}