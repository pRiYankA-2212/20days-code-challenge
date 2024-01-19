#include<stdio.h>
void greet(int x){
    if (x==0){
        return;
    }
    printf("Hello,Wrold!\n");
    greet(x-1);
    return ;

}
int main(){
    int n;
    printf("Enter");
    scanf("%d",&n);
    greet( n);
   
    return 0;

}