#include <stdio.h>
int main()
{
    int i, n;
    unsigned long long int fact = 1;
    printf("PLEASE ENTER THE NUMBER :");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("THE FACTORIAL OF %d IS %lld\n", n, fact);
    return 0;
}