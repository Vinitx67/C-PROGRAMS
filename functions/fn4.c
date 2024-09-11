#include <stdio.h>
long long factorial(int num);
int main()
{
    int n;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &n);

    printf("THE FACTORIAL OF %d A NUMBER IS : %lld \n ", n, factorial(n));
}
long long factorial(int num)
{
    long long fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
