#include <stdio.h>
#include <string.h>
#define max 20
typedef struct student
{
    char name[max];
    int rollNo;
    float marks;
} stud;

int main()
{
    stud student;

    printf("PLEASE ENTER YOUR NAME : ");
    fgets(student.name, max, stdin);

    printf("PLEASE ENTER A ROLL NO : ");
    scanf("%d", &student.rollNo);

    printf("PLEASE ENTER A MARKS : ");
    scanf("%f", &student.marks);

    printf("STUDENT INFO : \n");
    printf("NAME : %s", student.name);
    printf("ROLL NO : %d \n", student.rollNo);
    printf("MARKS : %.2f \n", student.marks);
}
