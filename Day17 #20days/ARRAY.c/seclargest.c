#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = INT_MIN;
    int Smax = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
        for (int i = 0; i < 8; i++)
        {
            if (Smax < arr[i] && max != arr[i])
            {
                Smax = arr[i];
            }
        }
        printf(" largest %d\n", max);
        printf(" second largest %d", Smax);
        return 0;
}