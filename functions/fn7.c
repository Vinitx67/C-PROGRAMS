#include <stdio.h>

int calcFact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calcFact(n - 1);
    }
}
int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("NUMBER MUST BE GREATER OR EQUAL TO ZERO !!!");
    }
    else
    {
        printf("THE FACTORIAL OF %d IS : %d\n", num, calcFact(num));
    }
}