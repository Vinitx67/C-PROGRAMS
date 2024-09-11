#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("ENTER 3 SIDES :");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 > 0 && s2 > 0 && s3 > 0)
    {
        if (s1 == s2 && s1 == s3)
        {
            printf("EQUILATERAL");
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3)
        {
            printf("ISOCELES");
        }
        else
        {
            printf("SCALENE");
        }
    }
    else
    {
        printf("NOT A VALID NUMBER");
    }
    return 0;
}