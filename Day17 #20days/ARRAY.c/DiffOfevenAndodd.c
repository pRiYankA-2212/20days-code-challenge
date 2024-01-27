//find the diffference between the sum of elements at indices at even indices to the  to the sum of element at odd indices
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        printf("Enter element");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n;i++){
       
        if(arr[i]%2==0){
         sum1+=arr[i];
        }
        else{
            sum2+=arr[i];
        }
    }
    int diff=sum1-sum2;
    printf("the diff is = %d",diff);
}