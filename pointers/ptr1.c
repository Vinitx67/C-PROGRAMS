#include <stdio.h>
int main()
{
    int x = 67;
    int *ptr;
    ptr = &x;

    printf("THE ADDRESS OF X IS : %d\n", &x);
    printf("THE VALUE OF ptr IS : %d\n", ptr);
    printf("THE ADDRESS OF ptr IS : %d\n", &ptr);
    printf("THE VALUE OF x IS : %d\n", x);
    printf("THE VALUE OF x USING ptr IS : %d\n", *ptr);

    int y = 78;
    ptr = &y;

    printf("THE ADDRESS OF Y IS : %d\n", &y);
    printf("THE VALUE OF ptr IS : %d\n", ptr);
    printf("THE ADDRESS OF ptr IS : %d\n", &ptr);
    printf("THE VALUE OF Y IS : %d\n", y);
    printf("THE VALUE OF Y USING ptr IS : %d\n", *ptr);

    return 0;
}