#include <stdio.h>
int main()
{
    char name[5];
    printf("ENTER A NAME : ");
    scanf("%4[^\n]s", name);
    printf("welcome %s\n", name);
    printf("THE SIZE OF A STRING IS : %d", sizeof(name));
    return 0;
}