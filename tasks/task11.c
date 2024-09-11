// WAP IN C TO DISPLAY THE NUMBERS IN REVERSE ORDER
#include <stdio.h>
#define max 100
int main()
{
    int numbers[max];
    int n, i;

    printf("ENTER THE NUMBERS : ");
    scanf("%d", &n);

    if (n > max || n <= 0)
    {
        printf("INVALID NUMBERS\n");
        return 1;
    }

    printf("ENTER %d NUMBERS : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("NUMBERS IN REVERSE ORDER :\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", numbers[i]);
    }

    return 0;
}
