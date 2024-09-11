#include <stdio.h>
// with return type without parameter
int calcSquare();
// with return type with parameter
int calcSquarewithParam(int n);

int main()
{
    int ans;
    ans = calcSquare();
    printf("THE SQUARE IS : %d \n", ans);

    // printf("THE SQUARE IS : %d \n", calcSquare());

    int n;
    printf("PLEASE ENTER A NUMBER TO ACCUMLATE SQUARE : ");
    scanf("%d", &n);
    printf("THE SQUARE OF A %d is : %d\n", n, calcSquarewithParam(n));

    return 0;
}
int calcSquare()
{
    int n, sq;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &n);
    sq = n * n;

    return sq;
}
int calcSquarewithParam(int n)
{
    return n * n;
}