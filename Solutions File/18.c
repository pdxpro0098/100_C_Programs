#include <stdio.h>

void primeFactors(int num)
{
    int i = 2;
    while (num != 1)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
        i++;
    }
}

int main()
{
    primeFactors(99);
}