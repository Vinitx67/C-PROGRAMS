#include <stdio.h>
int main()
{
    char alphabet;
    printf("ENTER A CHARACTER : ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("ENTERD ALPHABET IS A VOWEL \n");
        break;
    default:
        printf("NOT A VOWEL \n");
    }
    return 0;
}