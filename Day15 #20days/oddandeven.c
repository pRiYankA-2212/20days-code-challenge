// Passing Array  to function 
#include<stdio.h>

int main(){
    int arr[5]={3,8,6,9,4};
  for(int i=0;i<5;i++){
    if(arr[i%2==0]){
        arr[i]*=2;
    }
    else{
        arr[i=+10];
    }
  }
    for(int i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
}