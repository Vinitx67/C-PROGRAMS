#include <stdio.h>
void addAndProd(int x1, int x2, int *add, int *prod)
{
    *add = x1 + x2;
    *prod = x1 * x2;
}
int main()
{
    int n1, n2, addition, product;
    printf("ENTER NUMBER 1 : ");
    scanf("%d", &n1);
    printf("ENTER NUMBER 2 : ");
    scanf("%d", &n2);

    addAndProd(n1, n2, &addition, &product);
    printf("THE ADDITON OF %d AND %d IS : %d\n", n1, n2, addition);
    printf("THE PRODUCT OF %d AND %d IS : %d\n", n1, n2, product);
}