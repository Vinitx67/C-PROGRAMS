#include <stdio.h>
int main()
{
    int x;
    int *ptr = &x;

    printf("ENTER A NUMBER : ");
    scanf("%d", ptr);

    printf("THE VALUE OF X IS : %d\n", *ptr);
}