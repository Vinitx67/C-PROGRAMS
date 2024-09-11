#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER :");
    scanf("%d/", &num);

    if (num >0)
    {
        printf("NUMBER IS POSITIVE\n");
    }
    else 
    {
        printf("NUMBER IS NEGATIVE\n");
    }
    
    return 0;   
}