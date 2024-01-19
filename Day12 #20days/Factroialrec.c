#include<stdio.h>
int factorial(int a){
    if(a==1||a==0) return 1;
    return a*factorial(a-1);
}
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int x=factorial(a);
    printf("%d",x);
    return 0;

}