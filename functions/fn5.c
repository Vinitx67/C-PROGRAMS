#include <stdio.h>
int isPrime(int n)
{
    int prime = 0;
    if (n == 1)
    {
        prime = 1;
        return prime;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            return prime;
        }
    }
    return prime;
}
int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int checkPrime = isPrime(i);
        if (checkPrime == 0)
        {
            printf("%d\t", i);
        }
    }
}