#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("PLEASE ENTER A SIZE : ");
    scanf("%d", &n);

    float *ptr = calloc(n, sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("PLEASE ENTER A DECIMAL NUMBER AT POSITION %d : ", (i + 1));
        scanf("%f", (ptr + i));
    }
    printf("THE ELEMENT STORED IN DYNAMIC ARRAY IS : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t", *(ptr + i));
    }
    free(ptr);
}