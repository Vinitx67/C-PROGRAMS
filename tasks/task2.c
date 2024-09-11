#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    int remainder;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    printf("Sum of digits are: %d\n", sum);
}