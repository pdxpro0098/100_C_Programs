#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter first Number: ");
    scanf("%d", &a);
    printf("Enter second Number: ");
    scanf("%d", &b);
    int result = sum(a, b);
    printf("The sum of %d and %d is %d", a, b, result);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}