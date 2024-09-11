#include <stdio.h>
int main()
{
    int num, i, j, sp;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (sp = 1; sp <= (2 * (num - i) - 1); sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == num && j == num)
            {
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (i = num - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (sp = 1; sp <= (2 * (num - i) - 1); sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == num && j == num)
            {
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}