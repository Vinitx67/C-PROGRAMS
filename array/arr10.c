#include <stdio.h>
int main()
{
    int arr[] = {8, 6, 5, 2, -1};
    int n = sizeof(arr) / sizeof(int);
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        printf("\nPASS %d\n", i + 1);
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            for (int k = 0; k < n; k++)
            {
                printf("%d\t", arr[k]);
            }
            printf("\n");
        }
    }
}