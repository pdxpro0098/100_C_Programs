#include <stdio.h>

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

int main()
{
    int num = 100;
    if (isPrime(num))
    {
        printf("Is prime %d\n", num);
    }
    else
    {
        printf("Is not prime %d\n", num);
    }

    printf("\n\n");

    for (int i = 0; i <= num; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(i) == isPrime(i + 2))
            {
                printf("Twin prime %d %d\n", i, i + 2);
            }
        }
    }

    return 0;
}