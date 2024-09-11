#include <stdio.h>
int main()
{
    int i, n;
    int isPrime = 0;
    printf("PLEASE ENTER THE NUMBER :");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d NOT A PRIME NUMBER ", n);
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        printf("%d IS A PRIME NUMBER ", n);
    }
    return 0;
}