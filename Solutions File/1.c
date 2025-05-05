#include <stdio.h>

int isPrime(int prime);

int main()
{

    for (int i = 100; i <= 500; i++)
    {
        if (isPrime(i))
        {
            printf("prime : %d\n", i);
        }
        }
    return 0;
}

int isPrime(int prime)
{
    if (prime <= 1)
    {
        return 0;
    }

    if (prime == 3 || prime == 2)
    {
        return 1;
    }
    for (int i = 2; i < prime; i++)
    {
        if (prime % i == 0)
        {
            return 0;
        }
    }
    return 1;
}