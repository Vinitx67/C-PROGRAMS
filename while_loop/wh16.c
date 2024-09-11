#include <stdio.h>
int main()
{
    int i = 1, j;

    while (i <= 5)
    {
        int j = 1;
        while (j <= 5)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}