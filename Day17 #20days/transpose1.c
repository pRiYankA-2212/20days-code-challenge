// Wap to store all roll no and marks obatained by 4 student side by side in a matrix ;
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter your row and colume");
    scanf(" %d%d", &r, &c);
    int arr[r][c];
    int brr[c][r];
    // input the array of matrix ;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    //otuput f the array matrix;
  printf("Matrix \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    // transpose of the matrix;
    printf(" transpose of matrix \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {

            brr[i][j]=arr[j][i];
        }
    printf("\n");
    }
    printf(" transpose of matrix \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {

           printf("%d",brr[i][j]) ;
        }
    printf("\n");
    }
    return 0;
}