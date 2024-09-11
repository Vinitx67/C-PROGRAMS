#include <stdio.h>
int main()
{

    int n;
    printf("ENTER THE NUMBER : \n");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
}