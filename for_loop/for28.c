#include <stdio.h>
int main()
{
    int i, j, n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int isPrime = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 1;
                break;
            }
        }
        if (isPrime == 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}