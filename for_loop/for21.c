#include <stdio.h>
int main()
{
    int num, i, j, sp;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &num);
    for (i = num - 1; i >= 1; i--)
    {
        for (sp = 1; sp <= num - i; sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= num - 1; i++)
    {
        for (sp = 1; sp <= num - i; sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}