//parameter way
#include<stdio.h>
void greet(int x,int r){
    if (x>r){
        return;
    }
    printf(" %d\n",x);
    greet(x+1,r);
    printf("%d\n",x);
    return ;

}
int main(){
    int n;
    printf("Enter");
    scanf("%d",&n);
    greet( 1,n);
    
    return 0;

}