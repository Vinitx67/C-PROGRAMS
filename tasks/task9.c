// WAP TO PRINT SUM OF FIRST N NATURAL NUMBERS USING RECURSION

#include <stdio.h>
int NaturalSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + NaturalSum(n - 1);
    }
}
int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    int sum = NaturalSum(num);

    printf("SUM OF %d NATURAL NUMBER IS %d\n", num, sum);

    return 0;
}