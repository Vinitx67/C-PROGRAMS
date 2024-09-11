#include <stdio.h>
int main()
{
    float physics, chemistry, biology, maths, computer, total, percentage;
    printf("ENTER THE NUMBER OF FIVE SUBJECTS :\n ");
    printf("physics : ");
    scanf("%f", &physics);
    printf("chemistry : ");
    scanf("%f", &chemistry);
    printf("biology : ");
    scanf("%f", &biology);
    printf("maths : ");
    scanf("%f", &maths);
    printf("computer : ");
    scanf("%f", &computer);

    total = physics + chemistry + biology + maths + computer;
    percentage = (total / 500) * 100;

    printf("TOTAL MARKS : %f \n", total);
    printf("PERCENTAGE: %f \n", percentage);

    if (percentage >= 90)
    {
        printf("GRADE A \n");
    }
    else if (percentage >= 80)
    {
        printf("GRADE B \n");
    }
    else if (percentage >= 70)
    {
        printf("GRADE C \n");
    }
    else if (percentage >= 60)
    {
        printf("GRADE D \n");
    }
    else if (percentage >= 40)
    {
        printf("GRADE E \n");
    }
    else
    {
        printf("FAIL \n");
    }

    return 0;
}