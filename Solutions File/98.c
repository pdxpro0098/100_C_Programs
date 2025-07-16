#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int maxPrimeDigit(int number)
{
    int maxPrime = 0;
    for (int i = 0; i < number; i++)
    {
        int n = number % 10;
        if (n > maxPrime && isPrime(n))
        {
            maxPrime = n;
        }
        number /= 10;
    }
    return maxPrime;
}

int main()
{
    int digit = 123456789;

    printf("%d", maxPrimeDigit(digit));

    return 0;
}