#include<stdio.h>
#include<string.h>
typedef int* p;
int main(){
    int a=3,b=4;
    // int* x=&a;
    // int* y=&b;
    p x=&a,y=&b;//for using this we need to declear the one typedef in this .
    printf("%p\n",x);
    printf("%p",y);
    return 0;
}