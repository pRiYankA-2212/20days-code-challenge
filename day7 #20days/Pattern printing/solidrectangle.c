#include<stdio.h>
int main(){
   int r;
   printf("Enter the number of row :");
   scanf("%d",&r);
   int c;
   printf("Enter the number of colume :");
   scanf("%d",&c);
   for(int i=1;i<=r;i++){
    for(int i=1;i<=c;i++){
        printf("*");
    }
    printf("\n");
   }
    return 0;

}
