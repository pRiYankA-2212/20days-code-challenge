// Gp 3,12,48...
#include <stdio.h>
int main()
{
    int n;
    printf("Enetr n ");
    scanf("%d", &n);
    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a * 4;
    }
}