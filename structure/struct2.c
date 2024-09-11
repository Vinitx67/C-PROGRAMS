#include <stdio.h>
typedef struct student
{
    int rollNo;
    float marks;
} stud;

int main()
{
    stud s1;
    struct student s2;

    s1.rollNo = 67;
    s1.marks = 67.67;

    s2.rollNo = 87;
    s2.marks = 87.87;

    printf("STUDENT INFO : \n");
    printf("ROLL NO : %d \n", s1.rollNo);
    printf("MARKS : %.2f \n", s1.marks);
    printf("SIZE OF STRUCTURE : %d \n", sizeof(s1));

    printf("\nSTUDENT INFO : \n");
    printf("ROLL NO : %d \n", s2.rollNo);
    printf("MARKS : %.2f \n", s2.marks);
    printf("SIZE OF STRUCTURE : %d \n", sizeof(s2));
}