#include<stdio.h>
int main(){
    int arr[10]={1,3,4,5,3,5,4,6,7,8};
    for(int i=0;i<10;i++){
    printf("%p\n",&arr[i]);
    }
    return 0 ;
}