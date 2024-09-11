// WAP A PROGRAM IN C TO FIND THE NUMBER AND SUM OF ALL INTEGERS BETWEEN 100 AND 200 WHICH ARE DIVISIVLE BY 9
#include <stdio.h>
int main()
{
    int sum = 0, count = 0;
    printf("NUMBERS OF INTEGER BETWEEN 100 AND 200 THAT ARE DIVISIBLE BY 9 : \n");
    for (int i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d\t", i);
            sum += i;
            count++;
        }
    }
    printf("\n\nSUM OF INTEGER BETWEEN 100 AND 200 THAT ARE DIVISIBLE BY 9 : %d\n", sum);

    return 0;
}