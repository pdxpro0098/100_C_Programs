#include <stdio.h>

int length(int num)
{
    int len = 0;
    while (num > 0)
    {
        num /= 10;
        len++;
    }
    return len;
}

int is_prime(int digit)
{
    if (digit < 2)
        return 0;
    for (int i = 2; i * i <= digit; i++)
    {
        if (digit % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num = 123456789;
    int max_prime_digit = -1;
    int len = length(num);
    int digits[len];
    for (int i = 0; i < len; i++)
    {
        digits[i] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < len; i++)
    {
        if (is_prime(digits[i]) && digits[i] > max_prime_digit)
        {
            max_prime_digit = digits[i];
        }
    }

    printf("The maximum prime digit is: %d\n", max_prime_digit);
    return 0;
}