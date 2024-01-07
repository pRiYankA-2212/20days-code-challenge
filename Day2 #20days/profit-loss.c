//if cost price and selling price of an item is input through the keyboard,write a program to determine whether the seller has made profit or made or loss he incurred.
#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the Cp and Sp of item");
    scanf("%d\n %d",&cp,&sp);

    if(sp>cp){
        printf("seller in profit");
    }
    else if (cp=sp){
        printf("not in loss as well as profit");
    }
    
    
    else{
        printf("seller in loss");
    }
}