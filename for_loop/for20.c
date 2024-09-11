#include <stdio.h>
int main()
{
    int num, i, j, sp;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (sp = 1; sp <= (num - i); sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || i == num || j == (2 * i - 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}