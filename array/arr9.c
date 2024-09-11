#include <stdio.h>
int main()
{
    int a = 20, b = 40, temp;

    printf("NUMBERS BEFORE SWAPPING : \n");
    printf("THE VALUE OF A IS : %d\n ", a);
    printf("THE VALUE OF B IS : %d\n ", b);

    temp = a;
    a = b;
    b = temp;

    printf("NUMBERS AFTER SWAPPING : \n");
    printf("THE VALUE OF A IS : %d\n ", a);
    printf("THE VALUE OF B IS : %d\n ", b);
}