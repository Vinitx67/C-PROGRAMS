#include <stdio.h>
int main()
{
    int m1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result[3][3];
    printf("ADDITION OF MATRIX IS : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}