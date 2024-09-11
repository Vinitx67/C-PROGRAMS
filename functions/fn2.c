#include <stdio.h>
// without return type with parameter
void subtraction(int x1, int x2);
int main()
{
    int x1, x2;
    printf("PLEASE ENTER 1st NUMBER : ");
    scanf("%d", &x1);
    printf("PLEASE ENTER 2nd NUMBER : ");
    scanf("%d", &x2);
    subtraction(x1, x2);
}
void subtraction(int x1, int x2)
{
    int subt = x1 - x2;
    printf("%d - %d = %d\n", x1, x2, subt);
}