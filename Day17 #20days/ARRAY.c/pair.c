// find the total number of pairs in the array whose sum is equal to the given value x
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for( int i=0;i<n;i++){
        printf("Enter the element%d : ",i);
        scanf("%d :",&arr[i]);
    }
    for( int i=0;i<n;i++){
       
        printf("%d",arr[i]);
    }
    int a;
    printf("\n Enter your choes number");
    scanf("%d\n",&a);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){

        if(arr[i]+arr[j]>a){
            count++;
        }
        }
    }
    printf(" output is  %d\n",count);
 }