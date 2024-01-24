// WAP to count the num greater than choose num.
#include<stdio.h>
int main(){
    int arr[6]={3,6,4,2,7,8};
    int n;
    printf("Enter yur num");
    scanf("%d",&n);
        int count=0;
    for(int i=0;i<6;i++){
        if (n<arr[i]){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}