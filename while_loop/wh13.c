#include <stdio.h>
int main()
{
    int i = 1, evenSum = 0, oddSum = 0;
    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
            // evenSum += i;
        }
        else
        {
            oddSum = oddSum + i;
            // oddSum += i;
        }
        i++;
    }
    printf("THE SUM OF EVEN NUMBERS IS : %d \n", evenSum);
    printf("THE SUM OF ODD NUMBERS IS : %d \n", oddSum);

    return 0;
}