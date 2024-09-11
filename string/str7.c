#include <stdio.h>
#include <string.h>
#define MAX 10
int main()
{
    char str[MAX], reverseStr[MAX];
    printf("PLEASE ENTER A STRING : ");
    scanf("%s", str);

    strcpy(reverseStr, str);
    strrev(reverseStr);
    if (strcmp(str, reverseStr) == 0)
    {
        printf("THE GIVEN STRING %s IS A PALINDROME \n", str);
    }
    else
    {
        printf("THE GIVEN STRING %s IS NOT A PALINDROME \n", str);
    }
}