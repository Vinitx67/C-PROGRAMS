#include <stdio.h>

int main()
{
    int n, i, j = 0, k = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Even elements:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}