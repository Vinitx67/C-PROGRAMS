#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("PLEASE ENTER A SIZE TO ALLOCATE : ");
    scanf("%d", &n);

    double *ptr = calloc(n, sizeof(double));
    printf("THE ADDRESS OF POINTER IS : %d\n", &ptr);

    for (i = 0; i < n; i++)
    {
        printf("THE ADDRESS OF ELEMENT %d IS : %d\n", (i + 1), ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("ENTER ELEMENT AT POSITION %d : ", (i + 1));
        scanf("%lf", (ptr + i));
    }
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT AT POSITION %d is : %.2lf\n", (i + 1), *(ptr + i));
    }
    free(ptr);
}