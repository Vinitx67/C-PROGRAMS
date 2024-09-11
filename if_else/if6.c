#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("ENTER 3 NUMBERS : ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("NUMBER %d is greater than %d %d \n", n1, n2, n3);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("NUMBER %d is greater than %d %d \n", n2, n1, n3);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("NUMBER %d is greater than %d %d \n", n3, n1, n2);
    }
    else
    {
        printf("ALL ARE EQUAL");
    }
    return 0;
}