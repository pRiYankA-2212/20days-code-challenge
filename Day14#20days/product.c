//WAP to product of arrya.
#include<stdio.h>
int main(){
    int product[5]={1,3,4,5,5};
    int m=1;
    for(int i=0;i<5;i++){
         m=m*product[i];
    }
         printf("%d",m);
}