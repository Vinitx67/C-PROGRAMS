#include <stdio.h>
int main()
{
    int arr[] = {8, 6, 5, 2, -1};
    int n = sizeof(arr) / sizeof(int);
    int i, j, temp;
    printf("ARRAY BEFORE SORTING : \n");
    for (j = 0; j < n; j++)
    {
        printf("%d\t", arr[j]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nARRAY AFTER SORTING : \n");
    for (j = 0; j < n; j++)
    {
        printf("%d\t", arr[j]);
    }
}