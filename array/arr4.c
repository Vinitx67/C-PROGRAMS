#include <stdio.h>
int main()
{
    float arr[] = {2.2, 44.67, 6.49, 77.66, 9.21};

    int i;
    printf("ELEMENTS ARE : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%f\t", arr[i]);
    }
    printf("%d\n", &arr[i]);
}