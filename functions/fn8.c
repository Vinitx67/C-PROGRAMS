
//
#include <stdio.h>
int NaturAdd(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + NaturAdd(n - 1);
}

int main()
{
    int num;
    printf("ENTER A NATURAL NUMBER : ");
    scanf("%d", &num);

    int addition = NaturAdd(num);
    printf("THE SUM OF NATURAL NUMBER IS : %d", addition);
}