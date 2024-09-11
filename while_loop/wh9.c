#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum = sum + i;
        // sum += i;
        i++;
    }
    printf("THE SUM OF 10 NATURAL NUMBERS IS : %d \n", sum);
    return 0;
}