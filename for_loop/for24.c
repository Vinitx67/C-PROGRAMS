#include <stdio.h>
int main()
{
    int num, i, j, sp;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (sp = 1; sp <= (2 * (num - i)); sp++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}