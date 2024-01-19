//sum by return type
#include<stdio.h>
int sum(int a){
    if(a==1||a==0) return 1;
    return a+sum(a-1);
}
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int x=sum(a);
    printf("%d",x);
    return 0;

}
