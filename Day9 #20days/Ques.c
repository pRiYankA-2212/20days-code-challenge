/*print 1
         3 5
         7 9 11
         13 15 17 19*/

  #include<stdio.h>
  int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(a%2!=0){
                printf("%d",a);
            }
                a++;
        }
        printf("\n");
    }
  }       