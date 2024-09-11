#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("ENTER ELEMNET AT POSITION %d : ", i + 1);
        scanf("%d", ptr + i);
    }
    printf("ELEMENTS ARE : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    return 0;
}
