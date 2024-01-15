#include<stdio.h>
int sum(int a,int b){
return a+b;
}
int main(){
    int a;
    printf("Enter the numb");
    scanf("%d",&a);
    int b;
    printf("Enter the numb");
    scanf("%d",&b);
    int SUM= sum(a,b); 
    printf("the sum is :%d",SUM);
    return 0;
}