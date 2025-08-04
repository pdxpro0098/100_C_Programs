#include <stdio.h>

// Power function
int computePower(int n, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= n;
    }
    return result;
}

// Length Function Definition
int len(int num)
{
    int len = 0;
    for (; num > 0; num /= 10)
    {
        len++;
    }
    return len;
}

int main()
{
    int n, result, originalValue, lastDigit, power;
    printf("Enter the number: ");
    scanf("%d", &n);
    originalValue = n;
    result = 0;
    power = len(n);

    while (n > 0)
    {
        lastDigit = n % 10;
        result += computePower(lastDigit, power);
        n /= 10;
    }

    if (result == originalValue)
    {
        printf("%d is Armstrong", originalValue);
    }
    else
    {
        printf("%d is not Armstrong", originalValue);
    }

    return 0;
}
