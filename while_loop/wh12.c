#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        // sum += i;
        i++;
    }
    printf("THE SUM OF %d NATURAL NUMBERS IS : %d \n", n, sum);
    return 0;
}