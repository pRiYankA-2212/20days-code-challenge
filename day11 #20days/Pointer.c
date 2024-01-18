#include<stdio.h>
int main(){
    int a=6;
    int* x=&a;
    *x=8;// ye value change krne ke liye .
    printf("%p\n",a);//ye address h a ke container ka 
    printf("%p\n",&a);//or ye h x conatiner jaha pe a ka address store h.
    printf("%d",a);// x me jo address store h uski value .
    return 0;
}