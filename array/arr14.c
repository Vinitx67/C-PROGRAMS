#include <stdio.h>
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &n);

    int arr[20];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("PLEASE ENTER A ELEMENT AT POSITION %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("ELEMENTS ARE : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nELEMENTS IN REVERSE : \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}