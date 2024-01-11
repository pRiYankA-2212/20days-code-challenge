// nth term of GP(1,2,4,8,16...) an=ar^n-1
#include <stdio.h>
int main(){
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int a=1;
    for(int i =1;i<=n;i++){
        printf("%d\n",a);
        a=a*2;
    }
}