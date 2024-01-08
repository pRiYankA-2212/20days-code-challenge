//Print grades to corresponding marks
#include<stdio.h>
int main(){
    int num;
    printf("Enter num");
    scanf("%d",&num);
    if(num<100 && num>=90){
        printf("A+");
    }
     else if(num<90 && num>=80){
        printf("A");
    }
     else if(num<80 && num>=70){
        printf("B+");
    }
    else if(num<70 && num>=60){
        printf("B");
    }
    else if(num<60 && num>=30){
        printf("B");
    }
    else{
        printf("Fail");
    }
}