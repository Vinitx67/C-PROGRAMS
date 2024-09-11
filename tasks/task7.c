// WAP TO PRINT FIBONACCI SERIES TILL N
#include <stdio.h>

void Fibonacci(int N)
{
    int a = 0, b = 1, next;

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}

int main()
{
    int num;

    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    Fibonacci(num);

    return 0;
}
