#include <stdio.h>
int main()
{
    int i = 1, table;
    while (i <= 10)
    {
        table = 5 * i;
        printf("5 X %d = %d \n", i, table);
        i++;
    }
    return 0;
}