#include <stdio.h>
int main()
{
    int i, j, count = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d\t", count);
            count++;
        }
        printf("\n");
    }
}