// swaping of two number.
#include <stdio.h>
int swap(int* a,int* b){
    int temp;
     temp=*a;
    *a=*b;
*b=temp;
return;
}
int main(){
    int x,y,temp;
    printf("Enter a and b");
    scanf("%d %d",&x ,&y);
    swap(&x,&y);
    printf("%d \n %d  ",x,y);
    return 0;
}
