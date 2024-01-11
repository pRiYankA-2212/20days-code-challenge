// continue statement in loops
#include<stdio.h>
int main(){
    
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            continue;
        }
        printf("Enter num is even %d \n",i);
    }
}