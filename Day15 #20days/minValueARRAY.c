#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={5,8,4,3,8};
    int min=INT_MAX;
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min= arr[i];
        }
    }
    printf("%d\n",min);
  return 0;
}