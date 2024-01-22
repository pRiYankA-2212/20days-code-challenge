// print the number pyramid
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= s; j++)
        {
            printf("%d", a);
            a++;
        }
        s = s + 2;
        printf("\n");
    }
}