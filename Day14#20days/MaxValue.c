//Wap to max value in array.
#include<stdio.h>
int main(){
    int arr[6]={3,14,17,16,23,41};
    int max=-1;
    for(int i=0;i<6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
            printf("%d",max);
}