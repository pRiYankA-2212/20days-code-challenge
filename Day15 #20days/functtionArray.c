// Passing Array  to function 
#include<stdio.h>
void fun( int arr[]){
    arr[0]=8;
    return ;
}
int main(){
    int arr[2]={3,4};
    // int arr=7;
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}