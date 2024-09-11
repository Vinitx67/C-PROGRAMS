#include<stdio.h>
int main()
{
    int n1, n2;
    printf("ENTER TWO NUMBERS : ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        printf("n1 = %d is greater than n2 = %d \n", n1, n2);
    }
    else
    {
        printf("n2 = %d is greater than n1 = %d \n", n2, n1);
    }

    return 0;

}