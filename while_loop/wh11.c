#include <stdio.h>
int main()
{
    int i = 1, table;
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    while (i <= 10)
    {
        table = n * i;
        printf("%d X %d = %d \n", n, i, table);
        i++;
    }
    return 0;
}