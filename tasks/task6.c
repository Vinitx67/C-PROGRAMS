#include <stdio.h>

int main()
{
    int num, limit, page_size = 20;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);
    printf("ENTER THE LIMIT : ");
    scanf("%d", &limit);

    int page = 1;
    int start = 1;
    while (start <= limit)
    {
        printf("PAGE %d:\n", page);
        int end = start + page_size - 1;
        if (end > limit)
        {
            end = limit;
        }
        for (int i = start; i <= end; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
        start = end + 1;
        page++;
    }

    return 0;
}
