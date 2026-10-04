#include <stdio.h>
int main()
{
    int arr[3][3];
    int top=0, left = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 1;
    int bottom=n-1, right = n - 1;
    int i, j;
    while (left <= right && top <= bottom)
    {
        for (i = left; i <= right; i++)
        {
            arr[top][i] = num++;
        }
        top++;
        for (i = top; i <= bottom; i++)
        {
            arr[i][right] = num++;
        }
        right--;
        if (top <= bottom)
        {
            for (i = right; i >= left; i--) 
            {
                arr[bottom][i] = num++;
            }
            bottom--;
        }
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                arr[i][left] = num++;
            }
            left++;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}