#include <stdio.h>
int main()
{
    int i, n;
    printf("PLEASE ENTER THE NUMBER :");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        printf("%d\t", i);
    }
    return 0;
}