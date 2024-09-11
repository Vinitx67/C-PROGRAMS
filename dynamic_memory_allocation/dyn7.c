#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    char tempSent[20];
    printf("PLEASE ENTER A SIZE TO ALLOCATE : ");
    scanf("%d", &n);
    gets(tempSent);

    char *ptr = malloc(n * sizeof(char));
    printf("ENTER A SENTENCE : ");
    gets(ptr);
    printf("YOU ENTERED : %s", ptr);
}
