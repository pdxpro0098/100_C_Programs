#include <stdio.h>

void isPrime(int prime);

int main()
{

    for (int i = 100; i <= 500; i++)
    {
        isPrime(i);
    }
    return 0;
}

void isPrime(int prime)
{
    int divCount = 0;
    for (int i = 1; i <= prime; i++)
    {
        if (prime % i == 0)
        {
            divCount++;
        }
    }
    if (divCount == 2)
    {
        printf("%d is prime \n", prime);
    }
}