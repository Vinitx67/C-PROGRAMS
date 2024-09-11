#include <stdio.h>
long long factorial(int num)
{
    long long fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

void printFactorial(int num)
{
    long long fact = factorial(num);
    printf("%dX", num);
    for (int i = num - 1; i >= 1; i--)
    {
        printf("%dX", i);
    }
    printf("=%lld\n", fact);
}
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &n);
    printFactorial(n);

    return 0;
}