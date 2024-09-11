#include <stdio.h>
void demo(int *x)
{
    printf("THE VALUE OF X BEFORE ADDING 10 IS : %d\n", *x);
    *x = *x + 10;
    printf("THE VALUE OF X AFTER ADDING 10 IS : %d\n", *x);
}
int main()
{
    int x = 22;
    printf("THE VALUE OF X BEFORE CALLING DEMO() FUNCTIONS IS : %d\n", x);
    demo(&x);
    printf("THE VALUE OF X AFTER CALLING DEMO() FUNCTIONS IIS %d\n", x);
}
