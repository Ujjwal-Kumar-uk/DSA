//SUM OF THE SECOND LARGEST DIGIT AT EVEN INDEX AND SECOND SMALLEST DIGIT AT ODD INDEX
#include <stdio.h>
int summation(int arr[], int n)
{
    int i, max1,max2, min1, min2;
    if (arr[0] > arr[2]) {
        max1 = arr[0];
        max2 = arr[2];
    } else {
        max1 = arr[2];
        max2 = arr[0];
    }

    // initialize for odd indices (arr[1], arr[3], ...)
    if (arr[1] < arr[3]) {
        min1 = arr[1];
        min2 = arr[3];
    } else {
        min1 = arr[3];
        min2 = arr[1];
    }

    for (i = 4; i < n; i++)
    {
        if (i % 2 == 0)
        {
           if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] != max1)
            {
                max2 = arr[i];
            }
        }else{
            if(arr[i]<min1){
                min2 = min1;
                min1 = arr[i];
            }else if(arr[i]<min2 && arr[i]!=min1){
                min2 = arr[i];
            }
        }
    }
    return max2 + min2;
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int sum;
    sum = summation(arr,6);
    printf("%d\n",sum);
    return 0;
}