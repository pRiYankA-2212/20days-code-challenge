#include<stdio.h>
int main(){
    int arr[5]={2,3,4,5,6};
    int rev[5];
    for(int i=0;i<5;i++){
        rev[i]=arr[4-i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",rev[i]);
    }


}