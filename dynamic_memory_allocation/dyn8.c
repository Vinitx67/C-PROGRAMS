#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("PLEASE ENTER A SIZE FOR A STRING : ");
    scanf("%d", &n);

    char *ptr = malloc(n * sizeof(char));
    printf("ENTER A STRING : ");
    fflush(stdin);
    gets(ptr);
    printf("YOU ENTERED : %s", ptr);
}
