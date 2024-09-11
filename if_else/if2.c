#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("number is zero\n");
    }
    else
    {
        printf("number is non zero\n");
    }

    return 0;

}