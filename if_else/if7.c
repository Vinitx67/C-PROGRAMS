#include <stdio.h>
int main()
{
    char vowel;
    printf("ENTER A CHARACTER : ");
    scanf("%c", &vowel);

    if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
    {
        printf("CHARACTER IS VOWEL \n");
    }
    else
    {
        printf("CHARACTER IS NOT VOWEL \n");
    }

    return 0;
}