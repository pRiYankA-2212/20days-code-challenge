#include<stdio.h>
int main(){

    int arr[4][3]={{1,0,0},{1,1,1},{1,0,0},{1,0,1}};
    int maxcount=0;
    for(int i=0;i<4;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(maxcount<count){
            maxcount=count;
        }
    }
    printf("%d",maxcount);
            return 0;
}