#include <stdio.h>
#include <math.h>

int isPrime(int prime)
{
    for (int i = 2; i <=sqrt( prime); i++)
    {
        if (prime % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void fibonacci(int num)
{
    unsigned long long int first = 1, second = 1, third = 0;
    for (int i = 0; i <= num; i++)
    {
        first = second;
        second = third;
        third = first + second;

        if (isPrime(third))
        {
            printf("%d ", third);
        }
    }
}

int main()
{
    fibonacci(42);
    // unable to store larger number 
    return 0;
}
