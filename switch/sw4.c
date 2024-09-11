#include <stdio.h>
int main()
{
    int n1, n2, result;
    printf("ENTER TWO NUMBERS : ");
    scanf("%d%d", &n1, &n2);

    char operator;
    printf("PLEASE SELECT FROM THE LIST (+, -, *, /) \n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = n1 + n2;
        printf("%d + %d = %d \n", n1, n2, result);
        break;
    case '-':
        result = n1 - n2;
        printf("%d - %d = %d \n", n1, n2, result);
        break;
    case '*':
        result = n1 * n2;
        printf("%d * %d = %d \n", n1, n2, result);
        break;
    case '/':
        if (n2 != 0)
        {
            result = n1 / n2;
            printf("%d / %d = %d \n", n1, n2, result);
        }
        else
        {
            printf("CAN NOT DIVIDE BY ZERO \n");
        }
        break;

    default:
        printf("SELECT CORRECT OPTION \n");
    }
    return 0;
}