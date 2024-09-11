#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER :");
    scanf("%d/", &num);

    if (num > 0)
    {
        printf("NUMBER %d IS POSITIVE\n", num);
    }
    else if (num < 0)
    {
        printf("NUMBER %d IS NEGATIVE\n", num);
    }
    else
    {
        printf("NUMBER %d IS ZERO\n", num);
    }

    return 0;
}