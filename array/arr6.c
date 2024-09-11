#include <stdio.h>
int main()
{
    float marks[] = {2.2, 44.67, 6.49, 77.66, 9.21, 67.8, 45.98};

    int length = sizeof(marks) / sizeof(marks[0]);

    int i;
    float avg, sum = 0;
    for (i = 0; i < length; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / length;
    printf("THE SUM OF MARKS ARE : %.2f\n", sum);
    printf("THE AVG OF MARKS ARE : %.2f\n", avg);

    printf("SIZE OF MARKS : %d\n", sizeof(marks));
    printf("SIZE OF INT : %d\n", sizeof(int));
    printf("SIZE OF LENGTH : %d\n", sizeof(marks) / sizeof(int));
}