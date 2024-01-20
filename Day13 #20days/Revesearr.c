//print reverse  the arrays..
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        int a=i+1;
        printf("Enter the array value %d  =",a);
        scanf("%d",&arr[i]);
    }
    
    for(int i=4;i>=0;i--) printf("%d ",arr[i]);//printing the aaray by using the loop.
    return 0;
}