#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("PLEASE ENTER A SIZE TO ALLOCATE : ");
    scanf("%d", &n);

    int *ptr = malloc(n * sizeof(int));
    printf("THE ADDRESS OF POINTER IS : %d\n", &ptr);

    for (i = 0; i < n; i++)
    {
        printf("THE ADDRESS OF ELEMENT %d IS : %d\n", (i + 1), ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("ENTER ELEMENT AT POSITION %d : ", (i + 1));
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT AT POSITION %d is : %d\n", (i + 1), *(ptr + i));
    }

    int newSize;
    printf("PLEASE ENTER A SIZE TO ALLOCATE : ");
    scanf("%d", &newSize);

    for (i = n; i < newSize; i++)
    {
        printf("ENTER ELEMENT AT POSITION %d : ", (i + 1));
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < newSize; i++)
    {
        printf("ELEMENT AT POSITION %d is : %d\n", (i + 1), *(ptr + i));
    }

    free(ptr);
}