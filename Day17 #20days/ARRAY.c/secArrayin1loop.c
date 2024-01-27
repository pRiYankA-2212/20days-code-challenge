#include <stdio.h>
#include<limits.h>
int main(){
    int arr[5]={3,5,2,1,3};
    int max=INT_MIN;
    int Smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            Smax=max;
            max=arr[i];
        }
    }
    printf(" second largest number %d\n",Smax);
    printf(" largest number%d",max);
    return 0;
}