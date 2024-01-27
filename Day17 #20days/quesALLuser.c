// Wap to store all roll no and marks obatained by 4 student side by side in a matrix ;
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter your row and colume");
    scanf(" %d%d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d  ", arr[i][j]);
        }
    printf("\n");
    }
    return 0;
}