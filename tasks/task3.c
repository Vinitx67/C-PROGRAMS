#include <stdio.h>
int main()
{
    int num, og, reverse = 0;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    og = num;

    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (og == reverse)
    {
        printf("NUMBER %d IS PALINDROME \n ", og);
    }
    else
    {
        printf("NUMBER %d IS NOT PALINDROME \n", og);
    }
}