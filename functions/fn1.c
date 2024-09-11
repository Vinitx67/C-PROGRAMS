#include <stdio.h>
// without return type without parameter
void addition();
int main()
{
    addition();
    addition();
}
void addition()
{
    int n1, n2, sum;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d%d", &n1, &n2);
    sum = n1 + n2;
    printf("%d + %d = %d \n", n1, n2, sum);
}