#include <stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("ENTERD NUMBER %d IS DIVISIBLE BY BOTH 3 AND 5 \n", num);
    }
    else if (num % 3 == 0)
    {
        printf("ENTERD NUMBER %d IS ONLY DIVISIBLE BY 3 NOT 5 \n", num);
    }
    else if (num % 5 == 0)
    {
        printf("ENTERD NUMBER %d IS ONLY DIVISIBLE BY 5 NOT 3 \n", num);
    }
    else
    {
        printf("ENTERD NUMBER %d IS NOT DIVISIBLE BY BOTH 3 AND 5 \n", num);
    }
    return 0;
}
