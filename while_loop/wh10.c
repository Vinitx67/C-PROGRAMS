#include <stdio.h>
int main()
{
    int i = 1, square;
    int n;
    printf("ENTER A NUMBER :\n");
    scanf("%d", &n);

    while (i <= n)
    {
        square = i * i;
        printf("THE SQUARE OF %d IS : %d \n", i, square);
        i++;
    }
    return 0;
}