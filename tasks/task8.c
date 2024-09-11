// WAP TO FIND GREATEST AND SMALLEST OF 3 NUMBERS USING PONITERS
#include <stdio.h>
void GreatestSmallest(int *a, int *b, int *c, int *greatest, int *smallest)
{
    if (*a > *b && *a > *c)
    {
        *greatest = *a;
    }
    else if (*b > *a && *b > *c)
    {
        *greatest = *b;
    }
    else
    {
        *greatest = *c;
    }

    if (*a < *b && *a < *c)
    {
        *smallest = *a;
    }
    else if (*b < *a && *b < *c)
    {
        *smallest = *b;
    }
    else
    {
        *smallest = *c;
    }
}
int main()
{
    int n1, n2, n3, greatest, smallest;
    printf("PLEASE ENNTER THREE NUMBERS : ");
    scanf("%d%d%d", &n1, &n2, &n3);

    GreatestSmallest(&n1, &n2, &n3, &greatest, &smallest);

    printf("GREATEST NUMBER IS : %d\n", greatest);
    printf("SMALLEST NUMBER IS : %d\n", smallest);
}