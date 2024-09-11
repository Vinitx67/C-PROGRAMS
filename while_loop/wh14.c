#include <stdio.h>
int main()
{
    int i = 5, fact = 1;

    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }
    printf("THE FACTORIAL OF 5 IS : %d ", fact);

    return 0;
}