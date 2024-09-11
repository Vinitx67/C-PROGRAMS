#include <stdio.h>
#include <string.h>
#define max 30
typedef struct student
{
    char name[max];
    int rollNo;
    float marks;
} stud;

int main()
{
    stud student[3];

    for (int i = 0; i < 3; i++)
    {
        printf("PLEASE ENTER YOUR NAME : ", i + 1);
        fgets(student[i].name, max, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("PLEASE ENTER A ROLL NO : ", i + 1);
        scanf("%d", &student[i].rollNo);
        getchar();

        printf("PLEASE ENTER A MARKS : ", i + 1);
        scanf("%f", &student[i].marks);
        getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nSTUDENT INFO : \n");
        printf("NAME : %s\n", student[i].name);
        printf("ROLL NO : %d \n", student[i].rollNo);
        printf("MARKS : %.2f \n", student[i].marks);
    }
}
