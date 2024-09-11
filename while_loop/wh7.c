#include <stdio.h>
int main()
{
    int i = 1, square;
    while (i <= 10)
    {
        square = i * i;
        printf("THE SQUARE OF %d IS : %d \n", i, square);
        i++;
    }
    return 0;
}