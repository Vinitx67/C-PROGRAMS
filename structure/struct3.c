#include <stdio.h>
typedef struct student
{
    int rollNo;
    float marks;
} stud;

int main()
{
    stud s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("ENTER ROLL NO AT POSITION %d\n", i + 1);
        scanf("%d", &s[i].rollNo);
        printf("ENTER MARKS AT POSITION %d\n", i + 1);
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("STUDENT INFO : \n");
        printf("ROLL NO : %d \n", s[i].rollNo);
        printf("MARKS : %.2f \n", s[i].marks);
    }
}