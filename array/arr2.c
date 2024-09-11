#include <stdio.h>
int main()
{
    int arr[] = {2, 44, 6, 77, 9};

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