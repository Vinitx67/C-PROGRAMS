#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("ENTER ELEMENTS : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ELEMENTS ARE : \t");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nELEMENTS IN REVERSE ORDER ARE : ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}