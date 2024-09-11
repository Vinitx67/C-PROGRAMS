#include <stdio.h>
int main()
{
    int fact = 1;
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    while (num >= 1)
    {
        fact = fact * num;
        num--;
    }
    printf("THE FACTORIAL OF %d IS : %d ", num, fact);

    return 0;
}