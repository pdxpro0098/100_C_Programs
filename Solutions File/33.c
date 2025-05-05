// 33. Program to input any number and check if it is a prime. Also implement the logic of display of all twin primes within a given limit.
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

    for (int i = 0; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("prime no. %d\n", i);
        }
    }

    return 0;
}