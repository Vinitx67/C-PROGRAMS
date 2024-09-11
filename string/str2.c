#include <stdio.h>
int main()
{
    char name[20];
    printf("ENTER A NAME : ");
    gets(name);
    // scanf("%s", name);
    printf("welcome %s\n", name);
    printf("THE SIZE OF A STRING IS : %d", sizeof(name));
    return 0;
}