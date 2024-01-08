//Given three pts,(x1,y1),(x1,y1) nad (x1,y1)WAP to chech if all the three pts fall on one stright line
#include<stdio.h>
int main(){
    double x1, x2, x3,y1,y2,y3,m1,m2;
    printf("pts");
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf",&x1,&x2,&x3,&y1,&y2,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("one line");
    }
    else{
        printf("not in line");
    }
}