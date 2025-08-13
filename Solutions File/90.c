#include <stdio.h>

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int N, int R)
{
    return factorial(N) / (factorial(N - R) * factorial(R));
}

void pascalTriangle(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d  ", nCr(i, j));
        }
        printf("\n");
    }
}

int main()
{
    pascalTriangle(12);
    return 0;
}