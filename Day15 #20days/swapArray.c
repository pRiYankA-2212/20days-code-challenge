// Passing Array  to function 
#include<stdio.h>
void fun( int arr[]){
    int temp;
    temp=arr[0];
    arr[0]=arr[1];
     temp=arr[0];
    return ;
}
int main(){
    int arr[2]={3,4};
  
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}