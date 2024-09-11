#include <stdio.h>
int main()
{
    int dayNumber;
    printf("ENTER DAY NUMBER : ");
    scanf("%d", &dayNumber);

    if (dayNumber == 1)
    {
        printf("MONDAY \n");
    }
    else if (dayNumber == 2)
    {
        printf("TUESDAY");
    }
    else if (dayNumber == 3)
    {
        printf("WEDNESDAY");
    }
    else if (dayNumber == 4)
    {
        printf("THURSDAY");
    }
    else if (dayNumber == 5)
    {
        printf("FRIDAY");
    }
    else if (dayNumber == 6)
    {
        printf("SATURDAY");
    }
    else if (dayNumber == 7)
    {
        printf("SUNDAY");
    }
    return 0;
}