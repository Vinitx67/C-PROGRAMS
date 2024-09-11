#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("PLEASE ENTER A SIZE : ");
    scanf("%d", &n);

    int *ptr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("PLEASE ENTER A NUMBER AT POSITION %d : ", (i + 1));
        scanf("%d", (ptr + i));
    }
    printf("THE ELEMENT STORED IN DYNAMIC ARRAY IS : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    int newSize;
    printf("\nENTER A NEW SIZE : ");
    scanf("%d", &newSize);

    ptr = realloc(ptr, n * sizeof(int));
    for (int i = 0; i < newSize; i++)
    {
        printf("PLEASE ENTER A NUMBER AT POSITION %d : ", (i + 1));
        scanf("%d", (ptr + i));
    }
    printf("THE ELEMENT STORED IN DYNAMIC ARRAY IS : \n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
}