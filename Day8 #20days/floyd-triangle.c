/* 1
   2 3
   4 5 6
   8 9 10....so no
   print this patter*/
#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}
