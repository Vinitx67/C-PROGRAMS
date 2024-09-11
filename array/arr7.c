#include <stdio.h>
int main()
{
    int arr[] = {15, 20, 31, 22, 41, 10, 20, 39, 65, 12};
    int length = sizeof(arr) / sizeof(int);
    int i, evenSum = 0, oddSum = 0;
    for (i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    printf("THE SUM OF EVEN NUMBERS ARE : %d\n", evenSum);
    printf("THE SUM OF ODD NUMBERS ARE : %d\n", oddSum);
}