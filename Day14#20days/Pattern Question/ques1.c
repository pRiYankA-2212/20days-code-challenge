#include <stdio.h>
int main(){
    int marks[10]={73,28,16,92,82,26,93,82,73,54};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            //printf("%d ",marks[i]);//how is last than 35 number.
            printf("\n%d",i);//for printing thr index of marks.
        }
    }
}