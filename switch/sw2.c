#include <stdio.h>
int main()
{
    int dayNumber;
    printf("ENTER DAY NUMBER : ");
    scanf("%d", &dayNumber);

    switch (dayNumber)
    {
    case 1:
        printf("MONDAY \n");
        break;

    case 2:
        printf("TUESDAY \n");
        break;

    case 3:
        printf("WEDNESDAY \n");
        break;

    case 4:
        printf("THURSDAY \n");
        break;

    case 5:
        printf("FRIDAY \n");
        break;

    case 6:
        printf("SATUDAY \n");
        break;

    case 7:
        printf("SUNDAY \n");
        break;

    default:
        printf("INVALID \n");
    }

    return 0;
}