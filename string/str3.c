#include <stdio.h>
int main()
{
    char name[5];
    printf("ENTER A NAME : ");
    fgets(name, 5, stdin);
    printf("welcome %s\n", name);
    printf("THE SIZE OF A STRING IS : %d", sizeof(name));
    return 0;
}