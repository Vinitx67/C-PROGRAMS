#include <stdio.h>
int main()
{
    int arr[] = {10, 18, 6, 4, 1, 3, 5, 7};
    int even[10], odd[10];
    int j = 0, k = 0;
    for (int i = 0; i < 8; i++)
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
    printf("\nEVEN ELEMENTS PRESENT IN ARRAY ARE : \n ");
    for (int i = 0; i < j; i++)
    {
        printf("%d\t", even[i]);
    }
    printf("\nODD ELEMENTS PRESENT IN ARRAY ARE : \n ");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", odd[i]);
    }
    return 0;
}
