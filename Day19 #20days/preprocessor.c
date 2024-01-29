#include<stdio.h>
#include<math.h>
#include<limits.h>

int main(){
   //include<math.h> use for the sqrt,cbrt etc
    float x=sqrt(3);
    float y=cbrt(10);
    printf("%f\n",x);
    printf("cube of no: %f\n",y);
    //include<limits.h> use for the max min term.
    int a=INT_MAX;
    printf("%d",a);

    return 0;
}