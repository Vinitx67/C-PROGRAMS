#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("number %d is even\n", num);
    }
    else
    {
        printf("number %d is odd \n", num);
    }

    return 0;
}