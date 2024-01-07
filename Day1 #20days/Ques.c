//Find out the  fractional and integer part in the floating value.
#include<stdio.h>
int main(){
    float a;
    printf("Enter your num\n");
    scanf("%f",&a);
    int b=a;
    printf("%d\n",b);
    float s=a-b;
    printf("%f",s);
    return 0;

}