//Wap to store all roll no and marks obatained by 4 student side by side in a matrix ;
#include<stdio.h>
int main(){
    int arr[4][2]={1,90,2,80,3,99,4,89};
    for(int i=0;i<4;i++){
   for(int j=0;j<2;j++){
    printf("%d  ",arr[i][j]);
   }
   printf("\n");
    }
}