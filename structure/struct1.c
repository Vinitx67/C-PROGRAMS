#include <stdio.h>
struct student
{
    int rollNo;
    float marks;
};

int main()
{
    struct student s1;
    s1.rollNo = 67;
    s1.marks = 67.67;

    printf("STUDENT INFO : \n");
    printf("ROLL NO : %d \n", s1.rollNo);
    printf("MARKS : %.2f \n", s1.marks);
    printf("SIZE OF STRUCTURE : %d \n", sizeof(s1));
}