// WAp to print the addtion of two matrix int array.
#include <stdio.h>
int main()
{
    int arr1[2][2]={2,3,5,7};

    int arr2[2][2]={2,6,1,1};
    int result[2][2];
    for(int i=0;i<2;i++){
         for(int j=0;j<2;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
            
         }
    }
    for(int i=0;i<2;i++){
         for(int j=0;j<2;j++){
           
            printf("%d  ",result[i][j]);
         }
         printf("\n");
    }
}
