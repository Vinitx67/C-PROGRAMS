#include <stdio.h>
int main()
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ENTER ELEMENT AT POSITION %d, %d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("MATRIX IS : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}