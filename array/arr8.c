#include <stdio.h>
int main()
{
    int arr[] = {15, 20, 31, 22, 41, 10, 90, 39, 65, 12};
    int length = sizeof(arr) / sizeof(int);
    int i, max = arr[0], min = arr[0];
    for (i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("THE MAXIMUM ELEMENT IS : %d\n", max);
    printf("THE MINIMUM ELEMENT IS : %d\n", min);
}