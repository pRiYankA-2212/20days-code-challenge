// find tripalte of sum is equal to the number x .
//  find the total number of pairs in the array whose sum is equal to the given value x
#include <stdio.h>
int main()
{
    
    int arr[8]={1,2,3,4,5,6,7,8};
    int a=12;
    int count = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == a)
                {
                    count++;
                    printf("(%d %d %d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf(" output is  %d\n", count);
    return 0;
}