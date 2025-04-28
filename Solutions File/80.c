#include <stdio.h>

int Factorial(int fact);

int main()
{
    int fact = Factorial(5);
    printf("%d", fact);

    return 0;
}

int Factorial(int fact)
{
    int n = 1;
    for (int i = 1; i <= fact; i++)
    {
        n *= i;
    }
    return n;
}