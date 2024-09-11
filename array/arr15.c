#include <stdio.h>
int main()
{
    int arr[] = {5, 8, 6, 9, 4, 3, 85, 97, 656, 49, 57, 44};
    int len = sizeof(arr) / sizeof(int);
    int search, i, isFound = 0;
    printf("PLEASE ENTER AN ELEMNET TO SEARCH IN ARRAY : ");
    scanf("%d", &search);

    for (i = 0; i < len; i++)
    {
        if (search == arr[i])
        {
            printf("ELEMENT %d IS FOUND AT POSITION NUMBER %d\n", search, i + 1);
            isFound = 1;
            break;
        }
    }
    if (isFound == 0)
    {
        printf("ELEMENT IS NOT PRESENT IN ARRAY \n");
    }
    return 0;
}