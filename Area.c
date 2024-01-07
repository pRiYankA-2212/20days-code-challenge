// Give the lenght abd breadth of a rectangle write a program to find whether the area of rectangle is greater than its perimetre.
#include<stdio.h>
int main(){
    int r,b;
    scanf("%d\n %d",&r,&b);
    int area=r*b;
    int perimeter=2*(r+b);
    if(area>perimeter){
        printf(" greater");
    }
     else if(area=perimeter){
        printf("same");
    }
    else{
        printf("smaller");
    }
}