#include <stdio.h>

static int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    printf("%d", fact(5));

    return 0;
}