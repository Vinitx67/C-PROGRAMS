#include <stdio.h>
int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 45;
    arr[2] = 78;
    arr[3] = 57;
    arr[4] = 22;

    printf("ELEMENTS ARE : \n");
    printf("ELEMENT AT 1st INDEX IS : %d \n", arr[0]);
    printf("ELEMENT AT 2nd INDEX IS : %d \n", arr[1]);
    printf("ELEMENT AT 3rd INDEX IS : %d \n", arr[2]);
    printf("ELEMENT AT 4th INDEX IS : %d \n", arr[3]);
    printf("ELEMENT AT 5th INDEX IS : %d \n", arr[4]);

    printf("ADDRESSES ARE : \n");
    printf("ADDRESS AT 1st ELEMENT IS : %d \n", &arr[0]);
    printf("ADDRESS AT 2nd ELEMENT IS : %d \n", &arr[1]);
    printf("ADDRESS AT 3rd ELEMENT IS : %d \n", &arr[2]);
    printf("ADDRESS AT 4th ELEMENT IS : %d \n", &arr[3]);
    printf("ADDRESS AT 5th ELEMENT IS : %d \n", &arr[4]);
}