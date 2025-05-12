#include <stdio.h>

int main()
{
    int n = 5;
    int i, fact;

    for (i = 1, fact = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}
