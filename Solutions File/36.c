#include <stdio.h>

int main()
{
    int fact = 1, i, n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", n, fact);

    return 0;
}
