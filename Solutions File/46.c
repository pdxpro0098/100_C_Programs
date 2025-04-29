#include <stdio.h>

int main()
{
    int fact = 1, n, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}
